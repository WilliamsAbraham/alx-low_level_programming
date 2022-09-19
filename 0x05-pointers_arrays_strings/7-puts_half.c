#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @strn: An input string
 * Return: Nothing
 */
void puts_half(char *strn)
{
	int lent = 0, i, n;

	while (strn[lent] != '\0')
		lent++;

	if (lent % 2 == 0)
		n = lent / 2;

	else
		n = (lent + 1) / 2;

	for (i = n; i < lent; i++)
		_putchar(strn[i]);

	_putchar('\n');
}
