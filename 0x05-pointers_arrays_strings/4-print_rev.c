#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a \n
 * @s: The string tha will be reversed
 */
void print_rev(char *s)
{
	int length = 0, j;

	while (s[length] != '\0')
		length++;
	for (j = (length - 1); j >= 0; j--)
	{
	       _putchar(s[j]);
	}

	_putchar('\n');
}
