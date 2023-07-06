#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: number to factorise
 *
 * Return: -1 error or result of factorisation
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
