#include <math.h>
/**
 * _abs - computes the absolute value of an integer.
 * @n: the number to be absoluted
 *
 * Return: the abolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
