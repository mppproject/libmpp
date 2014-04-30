/*
___  ___                 ______          _           _
|  \/  |                 | ___ \        (_)         | |
| .  . |_ __  _ __ ______| |_/ / __ ___  _  ___  ___| |_
| |\/| | '_ \| '_ \______|  __/ '__/ _ \| |/ _ \/ __| __|
| |  | | |_) | |_) |     | |  | | | (_) | |  __/ (__| |_
\_|  |_/ .__/| .__/      \_|  |_|  \___/| |\___|\___|\__|
       | |   | |                       _/ |
       |_|   |_|                      |__/

[+]MPP is a C-based programming language that allows you to code more easily in Darija.
[+]Author : Naper & XDarker
[+]Web site : www.naper.eu
[+]Web site : mpp-project.org

*/

#include <errno.h>
#include <sys/socket.h>

int
__socket (domain, type, protocol)
     int domain;
     int type;
     int protocol;
{
  __set_errno (ENOSYS);
  return -1;
}


weak_alias (__socket, socket)
stub_warning (socket)
