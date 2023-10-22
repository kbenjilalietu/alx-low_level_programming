#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the setring that we will return its length
 *
 * Return: The length of string s
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}	
	return (i);
}
