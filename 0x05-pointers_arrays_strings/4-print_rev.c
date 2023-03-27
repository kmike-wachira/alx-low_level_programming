#include "main.h"

/**
 * print_rev - print in reverse order
 * @s : the string to return the value
 */
void print_rev(char *s)
{
	int i;
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > '\0')
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
