#include "main.h"
/**
 * print_diagonal - check whether character is upper
 *
 * @n : the numebr of times _wil be printed
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');

}