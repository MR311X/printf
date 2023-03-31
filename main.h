#ifndef MAIN_H
#define MAIN_H

/* inbuilt functions */
#include <stdarg.h>

/**
 * struct specifier - Struct specifier
 * @spec: The conversion specifier
 * @func: The function associated
 */

typedef struct specifier
{
	char spec;
	int (*func)(va_list, int);
} specifier_t;

/* print functions */
int _printf(const char *format, ...);
int printChar(va_list args, int printed);
int printStr(va_list args, int printed);
int printInt(va_list args, int printed);
int printBinary(va_list args, int printed);
int printUsign(va_list args, int printed);
int printOctal(va_list args, int printed);
int printHexLow(va_list args, int printed);
int printHexUp(va_list args, int printed);
int printS(va_list args, int printed);
int getSpecifier(char specifier, va_list args, unsigned int printed_char);

#endif
