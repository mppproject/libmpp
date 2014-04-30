#___  ___                 ______          _           _
#|  \/  |                 | ___ \        (_)         | |
#| .  . |_ __  _ __ ______| |_/ / __ ___  _  ___  ___| |_
#| |\/| | '_ \| '_ \______|  __/ '__/ _ \| |/ _ \/ __| __|
#| |  | | |_) | |_) |     | |  | | | (_) | |  __/ (__| |_
#\_|  |_/ .__/| .__/      \_|  |_|  \___/| |\___|\___|\__|
#       | |   | |                       _/ |
#       |_|   |_|                      |__/
#
#[+]MPP is a C-based programming language that allows you to code more easily in Darija.
#[+]Author : Naper & XDarker
#[+]Web site : www.naper.eu
#[+]Web site : mpp-project.org
#Filename: Makefile
CC=gcc
CFLAGS= -Wall -pedantic -std=c99
SOURCES=./include/mpp.h ./mpp_gen/mpp.c ./mpp_gen/mpp.c ./include/alwane.h ./include/itisal.h
CFILES=./mpp_gen/mpp.c ./mpp_gen/mpp.c

UTILDIR=../util/
UTILFLAG=-ltseutil
UTILLIB=$(UTILDIR)libmpplinux.a
UTILC=$(UTILDIR)hash.c $(UTILDIR)html.c $(UTILDIR)file.c $(UTILDIR)dictionary.c
UTILH=$(UTILC:.c=.h)

crawler:$(SOURCES) $(UTILDIR)header.h $(UTILLIB)
        $(CC) $(CFLAGS) -o $@ $(CFILES) -L$(UTILDIR) $(UTILFLAG)

$(UTILLIB): $(UTILC) $(UTILH)
        cd $(UTILDIR); make;