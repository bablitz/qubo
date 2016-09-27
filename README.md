Source for R@M embedded code

Most of the information in this document was taken from: http://chrisrm.com/howto-develop-on-the-ti-tiva-launchpad-using-linux/

To install dependencies: 

    # For 64-bit systems:
    sudo dpkg –add-architecture i386
 
    # For everybody:
    sudo apt-get update
    sudo apt-get install flex bison libgmp3-dev libmpfr-dev \
        libncurses5-dev libmpc-dev autoconf texinfo build-essential \
       libftdi-dev python-yaml zlib1g-dev libtool
 
    # The compiler
    sudo apt-get install binutils-arm-none-eabi
    
    # For 64-bit systems yet again:
    sudo apt-get install libc6:i386 libncurses5:i386 libstdc++6:i386
 
    # I needed these as well flashing over USB:
    sudo apt-get install libusb-1.0-0 libusb-1.0-0-dev
    

The tivaware and freeRTOS source is included in this repository and not needed to be downloaded

So we can flash the chip:

    # Choose whatever directory you want
    cd ~/Downloads 
    git clone git://github.com/utzig/lm4tools.git
    cd lm4tools/lm4flash/
    make
    # If you want to move to add it to your path, do so as your wish
    # Otherwise, you will have do call it with its path (as sudo) and the binary's path


To make the project (assuming you're in the top level project folder):

    cd src/ && make 

To flash the chip:
    
    sudo lm4flash gcc/main.bin
