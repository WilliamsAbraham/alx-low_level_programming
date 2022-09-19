#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int lent = 0, i = 0;
	char aux;

	while (s[lent] != '\0')
		lent++;

	while (i < lent--)
	{
		aux = s[i];
		s[i++] = s[lent];
		s[lent] = aux;
	}
}
