#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, num_started = 0, result = 0;
	
	while (s[i])
	{
		if (s[i] == '-' && !num_started)
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num_started = 1;
			result = result * 10 + (s[i] - '0') * sign;
		}
		else if (num_started)
			break;
		i++;
	}
	return (result);
}
