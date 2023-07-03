#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: memory stored
 * @src: memory copied
 * @n:nbr of bytes
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r, i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
