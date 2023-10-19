#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers,
 *        starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i, j, k, next;
	
	j = 1;
	k = 2;
	
	printf("%lu, %lu", j, k);
	
	for (i = 3; i <= 50; i++)
	{
		next = j + k;
		printf(", %lu", next);
		j = k;
		k = next;
	}
	printf("\n");
	return (0);
}
