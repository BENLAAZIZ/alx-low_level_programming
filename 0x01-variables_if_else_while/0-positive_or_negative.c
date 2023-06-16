#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determines if a nbr is nig or pos or zero
* return:always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("the number %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("the number %d is ziro\n", n);
	}
	else
	{
		printf("the number %d is negative\n", n);
	}
	return (0);
}
