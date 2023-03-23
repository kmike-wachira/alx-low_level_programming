#include "main.h"
/**
 * print_triangle - print a traingle
 *
 * @size : the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		k = (size - 1 - i);

		for (j = k; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
