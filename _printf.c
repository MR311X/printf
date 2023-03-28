#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
  * _printf - prints characters to standard output
  * @format: pointer to character string
  * @...: variadic arguments
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list args;
	const char *p = format;
	unsigned int printed_char = 0;

	va_start(args, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			++p;
			if (*p == 'c')
				printed_char = printChar(args, printed_char);
			else if (*p == 's')
				printed_char = printStr(args, printed_char);
			else if (*p == 'd' || *p == 'i')
				printed_char = printInt(args, printed_char);
			else if (*p == 'b')
				printed_char = printBinary(args, printed_char);
			else if (*p == '%')
			{
				putchar('%');
				++printed_char;
			}
		}
		else
		{
			putchar(*p);
			++printed_char;
		}
		++p;
	}
	va_end(args);

	return (printed_char);
}
