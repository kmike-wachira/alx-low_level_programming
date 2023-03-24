#include "main.h"
/**
 * print_number - print the number
 *
 * @n : number to check
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		_print_number(i / 10);
	}
	_putchar (i % 10 + '0');
}
