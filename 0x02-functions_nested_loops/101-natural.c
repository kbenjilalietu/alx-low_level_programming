#include <stdio.h>
/**
 * sum_natural : prints the sum of all the multiples of 3 or 5 < 1024
 * @n: the number that will exetract it's natural
 * 
 */
void sum_natural(int n)
{
	int i, sum = 0;

	if (n < 1024)
	{
		for (i = 0; i < n; i++)
		{
			if ((i % 3 == 0) || (i % 5 == 0))
				sum = sum + i;
		}
		printf("%d\n", sum);
	}
	return;
}
