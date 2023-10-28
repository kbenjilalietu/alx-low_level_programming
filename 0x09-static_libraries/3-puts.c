#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The string will be printed
 */
void _puts(char *str)
{
	int i;

	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
