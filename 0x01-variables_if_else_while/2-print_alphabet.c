#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Return: always 0 (success)
 */
int main(void)
{
	char lwcase;

	for (lwcase = 'a'; lwcase <= 'z'; lwcase++)
	{
		putchar(lwcase);
		putchar('\n');
	}

	return (0);
}
