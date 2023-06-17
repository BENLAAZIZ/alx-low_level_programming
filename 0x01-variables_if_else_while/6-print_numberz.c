#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10.
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
