#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s : The buffer
 * @b: The caractere that will relpace buffer value
 * @n: Bytes of the memory erea pointed to by s
 *
 * Return: The buffer with a constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return s;
}
