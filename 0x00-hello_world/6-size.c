#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Sizeof of an int: %u byte(s)\n", sizeof(b));
printf("Sizeof of a long int: %u byte(s)\n", sizeof(c));
printf("Size of a long long int: %u byte(s)\n", sizeof(d));
printf("Size of a float: %u byte(s)\n", sizeof(e));
return (0);
}
