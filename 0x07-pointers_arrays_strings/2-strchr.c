#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to be located
 *
 * Return: Pointer to the first occurrence of the character c in s,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return s;
		s++;
	}
	if (*s == c)
		return s;
	return NULL;
}
