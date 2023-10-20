#include "main.h"
/**
 * positive_or_negative - Determines if a number is positive, not or 0.
 * @n:  Intger number that will be tested its single
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
