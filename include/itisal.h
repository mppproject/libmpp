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

#ifndef __ALWANE_H__
#define __ALWANE_H__
#ifdef WIN32
#define WIN_METHOD 0
#else
#define LINUX_METHOD 1
#endif

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif
typedef struct sql{
	joumla host;
	joumla user;
	joumla pass;
	joumla mode;
	joumla db;

}sql;
typedef struct chabaka{
	ra9m s;
	joumla smaya;
	joumla ip;
}chabaka;
chabaka cjareb();

#ifdef __cplusplus
}
#endif

#endif
