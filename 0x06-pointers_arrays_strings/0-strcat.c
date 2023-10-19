#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *original_dest = dest; /* Save the original pointer to return later */
	
	/* Move to the end of dest */
	while (*dest)
		dest++;
	
	/* Copy src to dest */
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	
	/* Add the terminating null byte */
	*dest = '\0';
	return (original_dest);
}
