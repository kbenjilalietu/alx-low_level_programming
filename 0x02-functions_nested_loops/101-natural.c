#include <stdio.h>
/**
 * sum_natural : prints the sum of all the multiples of 3 or 5 < 1024
 * @n: the number that will exetract it's natural
 * 
 */
int sum_natural()
{
	int i;
	int sum = 0;
	
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
