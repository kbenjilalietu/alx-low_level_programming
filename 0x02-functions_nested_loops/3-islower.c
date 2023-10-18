/**
 * _islower - checks for lowercase character
 * @c: The character to be checked.
 *
 * Returns: 1 if c is lowercase 0 otherwise
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
