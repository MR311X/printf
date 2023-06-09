#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * getSpecifier - gets the print function for a given specifier
 * @specifier: the format specifier character
 * @args: arguments to be printed
 * @printed_char: number of characters printed
 * Return: a pointer to the corresponding print function, or -1 if not found
 */

int getSpecifier(char specifier, va_list args, unsigned int printed_char)
{
	int i;
	specifier_t specifiers[] = {
		{'c', printChar},
		{'s', printStr},
		{'d', printInt},
		{'i', printInt},
		{'u', printUsign},
		{'o', printOctal},
		{'x', printHexLow},
		{'X', printHexUp},
		{'S', printS},
		/*{'%', printPercent},*/
		{'\0', NULL}
	};

	for (i = 0; specifiers[i].spec != '\0'; i++)
	{
		if (specifiers[i].spec == specifier)
			return (specifiers[i].func(args, printed_char));
	}

	return (-1);
}
