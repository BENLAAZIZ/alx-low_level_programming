#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: ptr to ptr
 * @to: ptr to char
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
