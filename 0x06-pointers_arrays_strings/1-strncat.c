#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *original_dest = dest;
	int i = 0;

	while (*dest)
		dest++;
	while (i < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (n >= 0)
		*dest = '\0';
	return (original_dest);
}
