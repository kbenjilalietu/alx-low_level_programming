#include "main.h"
/**
 * sqrt_helper - recursively checks for the square root of a number.
 * @start: starting range
 * @end: ending range
 * @n: number to find the square root of
 * 
 * Return: square root if found, otherwise -1
 */
int sqrt_helper(int start, int end, int n)
{
	int mid;

	if (start > end)
		return (-1);
	
	mid = (start + end) / 2;
	if (mid * mid == n)
		return (mid);
	if (mid * mid < n)
		return (sqrt_helper(mid + 1, end, n));
	else
		return (sqrt_helper(start, mid - 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to compute the square root
 * 
 * Return: natural square root or -1 if not exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(0, n, n));
}
