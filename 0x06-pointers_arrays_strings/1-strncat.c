#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The most bytes from src
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int i = 0;

	while (*dest)
		dest++;
	while (i <= n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (original_dest);
}
