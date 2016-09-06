//TODO: add easier support for multiple busses to be addressed with the same functions
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>

#include "inc/hw_i2c.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_gpio.h"

#include "driverlib/rom.h"
#include "driverlib/i2c.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"

#include "utils/ustdlib.h"

//TODO: 
// Initializes first i2c bus
void initI2C0(void){
	//This function is for eewiki and is to be updated to handle any port

	//enable I2C module
	SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);

	//reset I2C module
	SysCtlPeripheralReset(SYSCTL_PERIPH_I2C0);

	//enable GPIO peripheral that contains I2C
	SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);

	// Configure the pin muxing for I2C0 functions on port B2 and B3.
	GPIOPinConfigure(GPIO_PB2_I2C0SCL);
	GPIOPinConfigure(GPIO_PB3_I2C0SDA);

	// Select the I2C function for these pins.
	GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);
	GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);

	// Enable and initialize the I2C0 master module.  Use the system clock for
	// the I2C0 module.  The last parameter sets the I2C data transfer rate.
	// If false the data rate is set to 100kbps and if true the data rate will
	// be set to 400kbps.
	I2CMasterInitExpClk(I2C0_BASE, SysCtlClockGet(), false);

	//clear I2C FIFOs
	HWREG(I2C0_BASE + I2C_O_FIFOCTL) = 80008000;
}

// writes to the first i2c bus
void writeI2C0(uint16_t device_address, uint16_t device_register, uint8_t device_data){
	//specify that we want to communicate to device address with an intended write to bus
	I2CMasterSlaveAddrSet(I2C0_BASE, device_address, false);

	//register to be read
	I2CMasterDataPut(I2C0_BASE, device_register);

	//send control byte and register address byte to slave device
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_START);

	//wait for MCU to finish transaction
	//maybe should have this be on a watchdog, but the time may not be an issue
	while(I2CMasterBusy(I2C0_BASE));

	I2CMasterSlaveAddrSet(I2C0_BASE, device_address, true);

	//specify data to be written to the above mentioned device_register
	I2CMasterDataPut(I2C0_BASE, device_data);

	//wait while checking for MCU to complete the transaction
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_RECEIVE_FINISH);

	//wait for MCU & device to complete transaction
	while(I2CMasterBusy(I2C0_BASE));
}

// reads length bytes from device_register on device_address
uint32_t readI2C0(uint16_t device_address, uint16_t device_register, uint16_t length){
	//specify that we want to communicate to device address with an intended write to bus
	I2CMasterSlaveAddrSet(I2C0_BASE, device_address, false);

	//the register to be read
	I2CMasterDataPut(I2C0_BASE, device_register);

	//send control byte and register address byte to slave device
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_SINGLE_SEND);

	//wait for MCU to complete send transaction
	while(I2CMasterBusy(I2C0_BASE));

	//read from the specified slave device
	I2CMasterSlaveAddrSet(I2C0_BASE, device_address, true);

	//send control byte and read from the register from the MCU
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_RECEIVE_START);
	uint32_t out = 0;
	for(int i = 0; i < length; i++){
		// reading one byte at a time so shifting is needed
		out <<= 8;
		// wait for MCU to be finished
		while(I2CMasterBusy(I2C0_BASE));
		// Add new value on the the end of the bytes
		out |= I2CMasterDataGet(I2C0_BASE);
		// signal to continue  sending
		I2CMasterControl(I2C0_BASE, I2C_MASTER_CM_BURST_RECEIVE_CONT);
	}	

	// wait for MCU to finsh signaling, and for the device to stop sending
	while(I2CMasterBusy(I2C0_BASE));
	I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_RECEIVE_FINISH);
	while(I2CMasterBusy(I2C0_BASE));
	return(out);
}

// honestly not sure how useful this is
//sends an I2C command to the specified slave
void sendI2C0(uint8_t slave_addr, uint8_t num_of_args, ...){
    // Tell the master module what address it will place on the bus when
    // communicating with the slave.
    I2CMasterSlaveAddrSet(I2C0_BASE, slave_addr, false);
     
    //stores list of variable number of arguments
    va_list vargs;
     
    //specifies the va_list to "open" and the last fixed argument
    //so vargs knows where to start looking
    va_start(vargs, num_of_args);
     
    //put data to be sent into FIFO
    I2CMasterDataPut(I2C0_BASE, va_arg(vargs, uint32_t));
     
    //if there is only one argument, we only need to use the
    //single send I2C function
    if(num_of_args == 1)
    {
        //Initiate send of data from the MCU
        I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_SINGLE_SEND);
         
        // Wait until MCU is done transferring.
        while(I2CMasterBusy(I2C0_BASE));
         
        //"close" variable argument list
        va_end(vargs);
    }
     
    //otherwise, we start transmission of multiple bytes on the
    //I2C bus
    else
    {
        //Initiate send of data from the MCU
        I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_START);
         
        // Wait until MCU is done transferring.
        while(I2CMasterBusy(I2C0_BASE));
         
        //send num_of_args-2 pieces of data, using the
        //BURST_SEND_CONT command of the I2C module
        for(uint8_t i = 1; i < (num_of_args - 1); i++)
        {
            //put next piece of data into I2C FIFO
            I2CMasterDataPut(I2C0_BASE, va_arg(vargs, uint32_t));
            //send next data that was just placed into FIFO
            I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_CONT);
     
            // Wait until MCU is done transferring.
            while(I2CMasterBusy(I2C0_BASE));
        }
     
        //put last piece of data into I2C FIFO
        I2CMasterDataPut(I2C0_BASE, va_arg(vargs, uint32_t));
        //send next data that was just placed into FIFO
        I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_FINISH);
        // Wait until MCU is done transferring.
        while(I2CMasterBusy(I2C0_BASE));
         
        //"close" variable args list
        va_end(vargs);
    }
}
