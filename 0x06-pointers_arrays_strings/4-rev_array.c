#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array
 * @n: elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, t;

	i = 0;
	while (i < n--)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
	}
}
