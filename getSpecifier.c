#include "main.h"

/**
 * getSpecifier - gets the print function for a given specifier
 * @specifier: the format specifier character
 * Return: a pointer to the corresponding print function, or NULL if not found
 */

int getSpecifier(char specifier)
{
	int i;
	specifier_t specifiers[] = {
		{'c', printChar},
		{'s', printString},
		{'d', printInt},
		{'i', printInt},
		{'u', printUsign},
		{'o', printOctal},
		{'x', printHexLow},
		{'X', printHexUp},
		{'%', printPercent},
		{'\0', NULL}
	};

	for (i = 0; specifiers[i].spec != '\0'; i++)
	{
		if (specifiers[i].spec == specifier)
			return (specifiers[i].func);
	}

	return (NULL);
}
