#install all the requirements
sudo apt update
sudo apt-get install build-essential

sudo dpkg --add-architecture i386

sudo apt-get install csh

sudo apt-get install gcc

sudo apt-get install g++

sudo apt-get update

sudo apt-get install gcc-multilib

sudo apt-get install g++-multilib

sudo apt-get install zlib1g:i386 libstdc++6:i386

sudo apt-get install libc6:i386 libncurses5:i386

sudo apt-get install libgcc1:i386 libstdc++5:i386

#install cross compiler

tar zxvf mips-decstation.linux-xgcc.gz
sudo cp -r usr/local/nachos /usr/local