#include "main.h"

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @strn: An input string
 * Return: Nothing
 */
void puts2(char *strn)
{
	int lent = 0, i = 0;

	while (strn[lent] != '\0')
		lent++;

	lent -= 1;

	for (; i <= lent; i += 2)
		_putchar(strn[i]);

	_putchar('\n');
}
