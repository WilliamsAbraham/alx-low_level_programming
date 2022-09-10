#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	long int y;
	long long int z;
	char a;
	float b;

        printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(z));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(b));
	return (0);
}