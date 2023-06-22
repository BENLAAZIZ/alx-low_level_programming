#include "main.h"

/**
 * print_number - Print the nbr since 0 up to 9
 *
 * Return: nbrs since 0 up to 9
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}