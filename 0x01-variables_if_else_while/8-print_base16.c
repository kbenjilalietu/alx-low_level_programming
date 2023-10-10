#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Determines whether a random number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num <= 102; num++)
	{
		if ((num >= 48 && num <= 57) || (num >= 97 && num <= 102))
			putchar(num);

	}
	putchar('\n');
	return (0);
}
