#include "main.h"

/**
 * _strncpy - Copies at most n bytes from src into dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to be copied.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
