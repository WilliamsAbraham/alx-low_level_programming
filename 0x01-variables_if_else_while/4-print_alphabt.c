#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 *main - entry point
 *
 *
 *
 *Return: always 0 (success)
 */

int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && != q)
		putchar(low);
	}
	putchar('\n');

	return (0);
