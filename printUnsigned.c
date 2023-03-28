#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * printUsign - prints an unsigned integer to stdout
 * @args: the va_list containing the unsigned integer to print
 * @printed: the running count of printed characters
 * Return: the updated count of printed characters
 */
int printUsign(va_list args, int printed)
{
	unsigned int num = va_arg(args, unsigned int);
	char num_str[20];

	sprintf(num_str, "%u", num);
	fputs(num_str, stdout);
	printed += strlen(num_str);
	return (printed);
}

/**
 * printOctal - prints an octal number to stdout
 * @args: the va_list containing the octal to print
 * @printed: the running count of printed characters
 * Return: the updated count of printed characters
 */
int printOctal(va_list args, int printed)
{
	unsigned int num = va_arg(args, unsigned int);
	char num_str[20];

	sprintf(num_str, "%o", num);
	fputs(num_str, stdout);
	printed += strlen(num_str);
	return (printed);
}

/**
 * printHexLow - prints lowercase hexadecimal number to stdout
 * @args: the va_list containing the hexadecimal to print
 * @printed: the running count of printed characters
 * Return: the updated count of printed characters
 */
int printHexLow(va_list args, int printed)
{
	unsigned int num = va_arg(args, unsigned int);
	char num_str[20];

	sprintf(num_str, "%x", num);
	fputs(num_str, stdout);
	printed += strlen(num_str);
	return (printed);
}

 /**
  * printHexUp - prints an uppercase one
  * @args: the va_list containing the hexadecimal to print
  * @printed: the running count of printed characters
  * Return: the updated count of printed characters
  */
int printHexUp(va_list args, int printed)
{
	unsigned int num = va_arg(args, unsigned int);
	char num_str[20];

	sprintf(num_str, "%X", num);
	fputs(num_str, stdout);
	printed += strlen(num_str);
	return (printed);
}
