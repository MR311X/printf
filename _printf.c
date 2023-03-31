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
	/* const char *p = format; */
	int i = 0;
	unsigned int printed_char = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			printed_char = getSpecifier(format[i], args, printed_char);
			i++;
		}
		else
		{
			putchar(format[i]);
			printed_char++;
			i++;
		}
	}
	va_end(args);

	return (printed_char);
}
