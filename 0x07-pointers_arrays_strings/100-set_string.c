#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer that we want to set/redirect
 * @to: The string to which we want to set the pointer
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
