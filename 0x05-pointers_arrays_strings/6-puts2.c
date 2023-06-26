#include "main.h"

/**
 * puts2 - prints every other character of string
 * @str: the string to be print
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; j += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
