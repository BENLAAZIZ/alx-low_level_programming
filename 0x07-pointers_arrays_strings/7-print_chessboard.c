#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		i++;
		_putchar('\n');
	}
}
