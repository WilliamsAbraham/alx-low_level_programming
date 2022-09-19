#include "main.h"

/**
 * _puts - Write a function that prints a string, followed
 * by a new line, to stdout.
 * @strn: an input string
 * Return: Nothing
 */
void _puts(char *strn)
{
	int i = 0;

	while (strn[i] != '\0')
	{
		_putchar(strn[i]);
		i++;
	}
	_putchar('\n');
}
