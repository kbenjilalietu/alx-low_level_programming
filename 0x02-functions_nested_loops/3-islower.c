/**
 * _islower - checks for lowercase character
 *
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(char c)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == c)
			return (1);
		ch++;
	}
	return (0);
}
