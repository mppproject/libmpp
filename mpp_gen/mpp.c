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
#include "../include/mpp.h"
#include "../include/alwane.h"
/*
== <> Mpp files function
*/

/*
Fonction : Wktab
Description: Allows you to write on a file . ex : wktab(w,"test = %s",string);
Return: done for the _xktab function
*/
ra9m wktab (war9a stream, joumla format, ...)
{
  va_list arg;
  ra9m done;

  va_start (arg, format);
  done = _xwktab (stream, format, arg);
  va_end (arg);

  return done;
}
/*
Fonction : 
Description:
Return:
*/
ra9m w9ra (war9a stream, joumla format, ...)
{
  va_list arg;
  ra9m done;

  va_start (arg, format);
  done = _xw9ra (stream, format, arg);
  va_end (arg);

  return done;
}

/*
=== <> mpp.h function <>===
*/
/*
Fonction : 
Description:
Return:
*/
khawi mpp_error(joumla message,...){
    set_color_to(31);
    ktab("[MPP : ERROR]: ");
    _7arf temp[1000];
    va_list ap;
    va_start(ap, message);
    vsprintf(temp, message, ap);
    va_end(ap);
    ktab(temp);
    lkimakan();
}
/*
Fonction : 
Description:
Return:
*/
khawi _w9ra(war9a w,joumla fichier,ra9m kifach){
    _7arf str[200];
    w = NULL;
    switch(kifach){
        case 1:
            w = xw7al(fichier,"r");
            if (!w){
                ktabhda(str,"fichier : %s",fichier);
                ktab("%s introuvable\n",fichier);
            }
            else {
                ktabhda(str,"fichier : %s",fichier);
                ktab("%s ouvert !\n",fichier);
            }
            break;
        case 2:
            w = xw7al(fichier,"w");
            ktabhda(str,"fichier : %s",fichier);
            ktab("%s tsayeb\n",fichier);
            break;
        default:
            ktab("Maymkench :D");
            break;
    }
    return ;
}
/*
Fonction : 
Description:
Return:
*/
war9a w7al(joumla name, ra9m mode){
    war9a w;
    w = NULL;

    switch(mode){
        case 1:
            w = xw7al(name,"r");
            break;
        case 2:
            w = xw7al(name,"w");
            break;
        default:
            mpp_error("Unknown mode !\n");
            break;
    }

    return w;
    /*
    ra9m fd;
    FILEE *fp;

    if (*mode != 'r' && *mode != 'w' && *mode != 'a')
           return NULL;
    for (fp = _iob; fp < _iob + OPEN_MAX; fp++)
        if ((fp->flag & (_READ | _WRITE)) == 0)
             break;        
    if (fp >= _iob + OPEN_MAX)
             return NULL;

    if (*mode == 'w')
        fd = creat(name, PERMS);
    else if (*mode == 'a') {
        if ((fd = open(name, O_WRONLY, 0)) == -1)
            fd = creat(name, PERMS);
        lseek(fd, 0L, 2);
    } else
        fd = open(name, O_RDONLY, 0);
    if (fd == -1)        
        return NULL;
    fp->fd = fd;
    fp->cnt = 0;
    fp->base = NULL;
    fp->flag = (*mode == 'r') ? _READ : _WRITE;
    return fp;
    */
}
/*
Fonction : 
Description:
Return:
*/
khawi r9ra(ra9m a){
    _9ra("%d",&a);
    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi _9ra(joumla message,...){
    ra9m r;
    va_list ap;
    va_start(ap, message);
    r = x9ra(message, ap);
    va_end(ap);
    return ;
}
/*
Fonction : 
Description:
Return:
*/
war9a wsayeb(joumla fichier,joumla message){
    war9a w;
    w = WALOU;
    w = xw7al(fichier,"w");
    ktab("%s\n",message);
    return w;
}
/*
Fonction : 
Description:
Return:
*/
ra9m ktabhda(joumla r, joumla message,...){
    va_list arg;
    ra9m k;

    va_start (arg, message);
    k = __xwktab (r, message, arg);
    va_end (arg);

    return k;
}
/*
Fonction : 
Description:
Return:
*/
ra9m ktab(joumla message,...){
    /*
    _7arf temp[1000];
    va_list ap;
    va_start(ap, message);
    vsprintf(temp, message, ap);
    va_end(ap);
    ktab(temp);
    */
    va_list arg;
    ra9m k;
    va_start (arg, message);
    k = _xwktab (stdout, message, arg);
    va_end (arg);

    return k;
}
/*
Fonction : 
Description:
Return:
*/
ra9m rlstar(joumla message ,...){
    va_list arg;
    ra9m k;
    va_start (arg, message);
    k = _xwktab (stdout, message, arg);
    va_end (arg);
    ktab("\n");
    
    return k;
}
/*
Fonction : 
Description:
Return:
*/
khawi wari_3o9adi(r3o9adi a){
    ktab("%f + %fi\n",a.r7a9i9i,a.rtakhayouli);
}
/*
Fonction : 
Description:
Return:
*/
khawi wari_ra9me(_ra9me a){
    ktab("%d\n",a);
    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi wari(_7arf message[], ra9m a){
    ktab("%s %d\n",message,a);  
    return ;
}
/*
Fonction : 
Description:
Return:
*/
_ra9me zaid(ra9m a, ra9m b){
    _ra9me result;
    result.natija = a + b;
    return result;

}
/*
Fonction : 
Description:
Return:
*/
_ra9me  na9is(ra9m a, ra9m b){
    _ra9me result;
    result.natija = a - b;
    return result;

}
/*
Fonction : 
Description:
Return:
*/
ra9m _rja3(ra9m a){
    return a ;

}
/*
Fonction : 
Description:
Return:
*/
khawi khrouj(ra9m value){
    exit(value);
    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi  ila_ra9m(ra9m a , ra9m b, _7arf message[MAX]){
    if (a == b){
        ktab("%s",message);
    }
    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi f3al(_7arf cmd [MAX]){
    //__f3al(cmd);
    system(cmd);
}
/*
Fonction : 
Description:
Return:
*/
khawi bdakolchi(_7arf smit_lprojet[100])
{
    _7arf str[200];
    #ifdef WIN32
    ktabhda(str,"title = %s",smit_lprojet);
    f3al(str);
    #endif
    ktab("======================= MPP ==================\n");
    ktab("MPP is a C-based programming language that allows you to code more easily in Darija.\n");
    ktab("[+]web site : blog.naper.eu || mpp-project.eu\n\n");
}

/*
=== <> alwane.h function <>===
*/
/*
Fonction : 
Description:
Return:
*/
khawi set_color_to(ra9m color){ //mettre la couleur à un nombre 
    switch(color){
        case 34:
            printf("\033[34m",color);
            break;
        case 31:
            printf("\033[31m",color);
            break;
        case 32:
            printf("\033[32m",color);
            break;
        case 33:
            printf("\033[33m",color);
            break;
        case 36:
            printf("\033[36m",color);
            break;
        default:
            printf("\033[0m");
            break;
    }

}
/*
Fonction : 
Description:
Return:
*/
khawi lkimakan(){
    ktab("\033[0m");
    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi khmar(joumla message,...){
    set_color_to(31);
    char temp[1000];
    va_list ap;
    va_start(ap, message);
    vsprintf(temp, message, ap);
    va_end(ap);
    ktab(temp);
    lkimakan();

    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi kkhdar(joumla message,...){
    set_color_to(32);
    char temp[1000];
    va_list ap;
    va_start(ap, message);
    vsprintf(temp, message, ap);
    va_end(ap);
    ktab(temp);
    lkimakan();

    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi ksfar(joumla message,...){
    set_color_to(33);
    char temp[1000];
    va_list ap;
    va_start(ap, message);
    vsprintf(temp, message, ap);
    va_end(ap);
    ktab(temp);
    lkimakan();

    return ;
}
/*
Fonction : 
Description:
Return:
*/
khawi kzra9(joumla message,...){
    set_color_to(34);
    char temp[1000];
    va_list ap;
    va_start(ap, message);
    vsprintf(temp, message, ap);
    va_end(ap);
    ktab(temp);
    lkimakan();

    return ;
}

