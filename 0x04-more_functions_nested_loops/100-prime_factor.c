#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor of 612852475143
 * Return: 0 on success
 */
int main(void)
{
	long int num = 612852475143;
	long int divisor = 2, largest;
	
	while (num != 1)
	{
		if (num % divisor == 0)
		{
			largest = divisor;
			num = num / divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", largest);
	return (0);
}
