#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: the nbr to be checked.
 * Return: Absolute value of nbr pr zero
 */

int _abs(int c)
{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}


