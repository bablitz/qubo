//TODO: decide on if the address and registers need their own header files, and devices their own driver

void initI2C0(void);

void writeI2C0(uint16_t, uint16_t, uint16_t);

uint32_t readI2C0(uint16_t, uint16_t, uint16_t);

void sendI2C0(uint8_t, uint8_t, ...);