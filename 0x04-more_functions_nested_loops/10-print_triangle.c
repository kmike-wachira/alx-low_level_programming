#include <stdio.h>
#include "main.h"
/**
 * main -main func
 *
 * Return: Always zero
 *
 */
int main(void)
{
	print_triangle(10);

	return (0);
}
/**
 *print_triangle -print a triangle
 *
 * @size : the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k, v;

	for (i = 0; i < size; i++)
	{
		k = (size - 1 - i);

		for (j = k; j > 0; j--)
		{
			_putchar(' ');
		}
		for (v = i; v >= 0; v--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
