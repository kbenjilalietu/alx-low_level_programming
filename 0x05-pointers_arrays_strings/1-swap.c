#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: First integer to be swaped with b
 * @b: Second integer to be swaped with a
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
