#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (success)
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
printf("Sizeof of an int: %lu byte(s)", (unsigned long)sizeof(char));
printf("Sizeof of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
