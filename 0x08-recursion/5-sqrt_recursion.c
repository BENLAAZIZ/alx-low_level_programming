#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: nbr to calculate the natural square
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculat natural square root
 * @n: nbr to calculate the square
 * @i: iterate number
 *
 * Return: the natural square
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
