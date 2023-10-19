#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int j, k, next, sum;

	j = 1;
	k = 2;
	sum = 0;
	next = 0;
	while(next <= 4000000)
	{
		next = j + k;
		j = k;
		k = next;
		if (next % 2 == 0)
			sum = sum + next;

	}
	printf("%lu\n", sum + 2);
	return (0);
}
