#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/**
  * printS - prints string
  * @args: list of arguments to print
  * @printed: number of characters printed
  * Return: characters printed
  */
int printS(va_list args, int printed)
{
	char *str = va_arg(args, char *);
	int len = strlen(str);
	int i;
	/* char hex[2]; */
	/* int j, d, n; */

	for (i = 0; i < len; i++)
	{
		/*
		if (str[i] == '\0')
		{
			putchar('\\');
			putchar('0');
			putchar('0');
			printed += 3;
		}
		else */ 
		if (str[i] >= 32 && str[i] < 127)
		{
			putchar(str[i]);
			printed++;
		}
		else
		{
			putchar('\\');
			putchar('x');
			if (str[i] < 16)
				putchar('0');
			/* n = str[i];

			for (j = 1; j >= 0; j--)
			{
				d = n % 16;
				if (d < 10)
					hex[j] = '0' + d;
				else
					hex[j] = 'A' + (d - 10);
				
				n /= 16;
			}
		}
		putchar(hex[0]);
		putchar(hex[1]);
		*/
			printf("%X", str[i]);
			printed += 4;
		}
	}
	return (printed);
}
