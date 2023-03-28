#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_int - prints an integer to stdout
 * @args: the va_list containing the integer to print
 * @printed: the running count of printed characters
 * Return: the updated count of printed characters
 */

int printInt(va_list args, int printed)
{
	int num = va_arg(args, int);
	char num_str[20];

	sprintf(num_str, "%d", num);
	fputs(num_str, stdout);
	printed += strlen(num_str);
	return (printed);
}
