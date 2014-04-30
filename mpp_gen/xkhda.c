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
/*
int xktabhda (char *string, const char *format, _IO_va_list args)
{
  _IO_strfile sf;
  int ret;

#ifdef _IO_MTSAFE_IO
  sf._sbf._f._lock = NULL;
#endif
  _IO_no_init (&sf._sbf._f, _IO_USER_LOCK, -1, NULL, NULL);
  _IO_JUMPS (&sf._sbf) = &_IO_str_jumps;
  _IO_str_init_static_internal (&sf, string, -1, string);
  ret = _IO_vfprintf (&sf._sbf._f, format, args);
  _IO_putc_unlocked ('\0', &sf._sbf._f);
  return ret;
}
*/