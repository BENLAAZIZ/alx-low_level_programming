#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to count the length
 *
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
