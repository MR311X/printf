#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
  * printChar - prints a single characater
  *@args: argument list
  *@printed: the number of printed characters
  *Return: number of printed characters
  */

int printChar(va_list args, int printed)
{
	char c = va_arg(args, int);

	putchar(c);
	++printed;
	return (printed);
}

/**
 * printStr - prints a string
 *@args: argument list
 *@printed: the number of printed character
 *Return: number of printed characters
 */

int printStr(va_list args, int printed)
{
	char *str = va_arg(args, char *);

	fputs(str, stdout);
	printed += strlen(str);
	return (printed);
}
