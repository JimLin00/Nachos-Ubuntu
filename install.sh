#install all the requirements
sudo apt update
sudo apt-get install build-essential -y

sudo dpkg --add-architecture i386

sudo apt-get install csh -y

sudo apt-get install gcc -y

sudo apt-get install g++ -y

sudo apt-get update

sudo apt-get install gcc-multilib -y

sudo apt-get install g++-multilib -y

sudo apt-get install zlib1g:i386 libstdc++6:i386 -y

sudo apt-get install libc6:i386 libncurses5:i386 -y

sudo apt-get install libgcc1:i386 libstdc++5:i386 -y

#install cross compiler

tar zxvf mips-decstation.linux-xgcc.gz
sudo cp -r usr/local/nachos /usr/local