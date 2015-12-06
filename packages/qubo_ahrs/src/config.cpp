
#include "../include/util.h"
#include <string>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
   if (argc == 3) {
      try {
         IMU *imu = new IMU(std::string(argv[1]),getBaudrate(argv[2]));
         IMU::AcqConfig config;
         IMU::FilterData filters;
         unsigned int i;

         imu->openDevice();
         printf("Connected to %s.\n", (imu->getInfo()).c_str());

         imu->sendIMUDataFormat();

         printf("IMU Configuration data:\n");

         config = imu->getAcqConfig();
         printf("Acqusition mode:   %d\n", config.poll_mode);
         printf("Flush Filter:      %d\n", config.flush_filter);
         printf("Sample delay:      %f\n", config.sample_delay);

         filters = imu->getFIRFilters();
         printf("Number of filters: %u\n", filters.size());
         for (i=0; i < filters.size(); i++)
         printf("Filter #%.2d:        %f\n",i, filters[i]);

         printf("Mag Truth Method:  %d\n", imu->getMagTruthMethod());
         printf("Functional mode:   %d\n", imu->getAHRSMode());
         printf("Declination:       %f\n", imu->getDeclination());
         printf("UserCalNumPoints:  %d\n", imu->getCalPoints());
         printf("Mag Setting:       %d\n", imu->getMagCalID());
         printf("Accel setting:     %d\n", imu->getAccelCalID());
         printf("Mounting mode:     %d\n", imu->getMounting());
         printf("Baudrate:          %d\n", imu->getBaudrate().baud);
         printf("True north?        %d\n", imu->getTrueNorth());
         printf("Big endian?        %d\n", imu->getBigEndian());
         printf("Auto sampling?     %d\n", imu->getAutoCalibration());
         printf("Mils/Degrees?      %d\n", imu->getMils());
         printf("HPR During Cal?    %d\n", imu->getHPRCal());
         imu->closeDevice();
         exit(0);
      }
      catch (std::exception& e)
      {
         printError(e);
      }
   } 
   printUsage();
}
