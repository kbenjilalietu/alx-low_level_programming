#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar(i / 10 + '0'); /* print tens of i */
			putchar(i % 10 + '0'); /* print units of i */
			putchar(' ');

			putchar(j / 10 + '0'); /* print tens of j */
			putchar(j % 10 + '0'); /* print units of j */

			if (i != 98 || j != 99) /* don't print comma and space at the end */
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
