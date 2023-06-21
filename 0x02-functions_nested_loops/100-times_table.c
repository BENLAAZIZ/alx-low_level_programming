#include "main.h"

/**
 * print_times_table - 	prints the time table of thr input.
 * Starting with 0.
 * @n: the value of te times table to be printed
 */

void print_times_table(int n)
{
	int nbr, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (nbr = 0; nbr <= n; nbr++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = nbr * mult;
				if (prod <= 99)
				_putchar(' ');
				if (prod <= 9)
				_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
					_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
