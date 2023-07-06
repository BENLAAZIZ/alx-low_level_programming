#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to multiply
 * @y: time to multiply this value
 *
 * Return: integer value (value multiplied times)
 */

int _pow_recursion(int x, int y)
{
	if (y <	0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
