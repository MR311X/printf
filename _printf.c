#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
  * _printf - prints characters to standard output
  * @format: pointer to character string
  * @...: variadic arguments
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	char c, *s;
	const char *p = format;
	int chars_printed = 0;
	va_list args;

	va_start(args, format);

	while (*p != '\0')
	{
		if (*p == '%')
		{
			++p;
			if (*p == 'c')
			{
				c = va_arg(args, int);
				putchar(c);
				++chars_printed;
			}
			else if (*p == 's')
			{
				*s = va_arg(args, char *);
				fputs(str, stdout);
				chars_printed += strlen(str);
			}
			else if (*p == '%')
			{
				putchar('%');
				++chars_printed;
			}
		}
		else
		{
			putchar(*p);
			++chars_printed;
		}
		++p;
	}
	va_end(args);

	return (chars_printed);
}
