#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to a string.
 */
void rev_string(char *s)
{
	int length = 0;
	int i;
	char tmp;
	while (s[length] != '\0')
		length++;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}
}
