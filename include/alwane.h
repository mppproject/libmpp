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
[+]Web site : blog.naper.eu
[+]Web site : mpp-project.org

*/

#ifndef __ALWANE_H__
#define __ALWANE_H__
#ifdef WIN32

#else

#define couleur(param) printf("\033[$m",param)
/*

Linux colors

hmar  	31
khdar 	32
zra9  	34
sfar  	33
zra9_2  36

*/

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
khawi set_color_to(ra9m color);
khawi lkimakan();
khawi khmar(joumla message,...);
khawi kkhdar(joumla message,...);
khawi ksfar(joumla message,...);
khawi kzra9(joumla message,...);


#ifdef __cplusplus
}
#endif

#endif
