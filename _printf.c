#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
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
			{
				char c = va_arg(args, int);

				_putchar(c);
				++printed_char;
			}
			else if (*p == 's')
			{
				char *str = va_arg(args, char *);

				fputs(str, stdout);
				printed_char += strlen(str);
			}
			else if (*p == '%')
			{
				_putchar('%');
				++printed_char;
			}
		}
		else
		{
			_putchar(*p);
			++printed_char;
		}
		++p;
	}
	va_end(args);

	return (printed_char);
}

/**
 * _putchar - putchar function
 * @c: our character to print
 * Return: integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
