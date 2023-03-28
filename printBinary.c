#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * printBinary - prints an unsigned integer in binary format
 * @args: arguments containing the unsigned integer to print
 * @printed: number of printed characters
 * Return: number of printed characters
 */
int printBinary(va_list args, int printed)
{
	unsigned int num = va_arg(args, unsigned int);
	char binary_str[33] = {0};
	int i, j;

	for (i = 0, j = 31; i < 32; i++, j--)
	{
		if (num & (1 << i))
			binary_str[31 - i] = '1';
		else
			binary_str[31 - i] = '0';
	}

	binary_str[32] = '\0';

	fputs(binary_str, stdout);
	printed += strlen(binary_str);

	return (printed);
}
