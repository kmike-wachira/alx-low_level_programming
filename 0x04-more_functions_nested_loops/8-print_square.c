#include "main.h"
/**
 * print_square - check whether character is upper
 *
 * @n : the numebr of times _wil be printed
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
