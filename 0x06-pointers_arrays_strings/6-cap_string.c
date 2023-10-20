#include "main.h"

/**
 * is_separator - Checks if the character is a separator.
 * @c: Character to check.
 *
 * Return: 1 if it's a separator, 0 otherwise.
 */
int is_separator(char c)
{
    char separators[] = " \t\n,;.!?\"(){}";
    int i;

    for (i = 0; separators[i]; i++)
    {
        if (c == separators[i])
        {
            return (1);
        }
    }

    return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @s: String to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
    int i = 0;

    // Capitalize the first character if it's a lowercase letter
    if (s[0] >= 'a' && s[0] <= 'z')
    {
        s[0] -= 32;
    }

    // Iterate through the string
    while (s[i])
    {
        // If the character is a separator and the next one is a lowercase letter
        if (is_separator(s[i]) && s[i + 1] >= 'a' && s[i + 1] <= 'z')
        {
            s[i + 1] -= 32;
        }
        i++;
    }

    return s;
}

