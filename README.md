libmpp
======

MPP is a C-based programming language that allows you to code more easily in Darija.

Requirements :
- root privileges
- having access to the internet
- libc header files

Download :

  mpp_installer.tar.gz

Installing Dependencies :

We start by making sure that we have installed the libc header files. type the following command at shell prompt (Debian/Ubuntu users) :
sudo apt-get install libc6-dev

For Red hat users :
  yum install -y glibc-devel.i386

Running the installer :

Once the required package has been installed, we can now begin with the installation without any problem :)

We will start by making the file executable by typing  :
  chmod 777 mpp.install

Then :
  ./mpp.install
 
Installing via a deb package :

Download :
  Mirror 1 : libmpp_1.1.deb
  Mirror 2 : libmpp_1.1.zip

Type the following to install the deb package :
  sudo dpkg -i libmpp_1.1.deb 

To uninstall :
  sudo apt-get remove libmpp
