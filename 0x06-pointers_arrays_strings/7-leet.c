#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: String to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *s)
{
    int i, j;
    char original[] = "aeotlAEOTL";
    char leet_rep[] = "4307143071";

    for (i = 0; s[i]; i++)
    {
        for (j = 0; original[j]; j++)
        {
            if (s[i] == original[j])
            {
                s[i] = leet_rep[j];
                break;
            }
        }
    }

    return s;
}
