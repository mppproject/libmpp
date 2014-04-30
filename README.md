libmpp
======

MPP is a C-based programming language that allows you to code more easily in the moroccan Darija.

Requirements :
- root privileges
- having internet access
- libc header files


Installing Dependencies
======

The libc header files need to be installed in order to run the kmpp compiler. To install, type the following at the command prompt :

(Debian/Ubuntu users)

        sudo apt-get install libc6-dev

For Red hat users :

        yum install -y glibc-devel.i386

Running the installer :

Before running the installer, we need to make it executable by typing:

        chmod 777 mpp.install

Then

        ./mpp.install

Installing via a deb package
======


Type the following to install the deb package

        sudo dpkg -i libmpp_1.1.deb 

To uninstall

        sudo apt-get remove libmpp
