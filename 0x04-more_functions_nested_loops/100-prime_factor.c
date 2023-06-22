#include <stdio.h>
#include <math.h>

/**
 * main - print the lrgest prime factor of the nbr 612852475143
 * Return: Alaways 0 to success
 */

int main(void)
{
	long x, maxf;
	long nbr = 612852475143;
	double square = sqrt(nbr);

	for (x = 1; x <= square; x++)
	{
		if (nbr % x == 0)
		{
			maxf = nbr / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
