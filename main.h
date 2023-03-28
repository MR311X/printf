#ifndef MAIN_H
#define MAIN_H

/* inbuilt functions */
#include <stdarg.h>

/* print functions */
int _printf(const char *format, ...);
int printChar(va_list args, int printed);
int printStr(va_list args, int printed);
int printInt(va_list args, int printed);
int printBinary(va_list args, int printed);

#endif
