#include "main.h"

/**
 * print_rev - print in reverse order
 * @s : the string to return the value
 */
void print_rev(char *s)
{
	int len, i;

	for (len = 0 ; s[len] != '\0' ; len++)
		;
	for (i = len; s[i] != '\0'; i--)
	{
		_putchar(s[i];
	}
	_putchar('\n');
}
