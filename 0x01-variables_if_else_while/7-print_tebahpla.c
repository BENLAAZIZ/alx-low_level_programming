#include <stdio.h>
/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{
	char l;

	l = 'z';
	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
