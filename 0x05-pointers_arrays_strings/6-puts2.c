#include "main.h"
/**
 *  puts2 - return the string needed
 * @str : string parameter input
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		;
	}
	for (j = 0 ; j < i ; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
