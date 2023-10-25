#include "main.h"
/**
 * check_divisor - checks for a divisor of a number.
 * @num: number to check if prime
 * @divisor: current divisor to check
 *
 * Return: 0 if not prime, 1 if prime
 */
int check_divisor(int num, int divisor)
{
	if (num == divisor)
		return 1;
	if (num % divisor == 0)
		return 0;
	return check_divisor(num, divisor + 1);
}
/**
 * is_prime_number - checks if the number is a prime number.
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return 0;
	return check_divisor(n, 2);
}
