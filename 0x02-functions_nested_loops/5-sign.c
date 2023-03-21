#include "main.h"
/**
 * _print_sign - function to print the sign.
 *
 * @c : The character to be checked.
 *
 * Return: 1 if greater than zero, 0 is zero.-1 for -ve
 */
int _print_sign(int c)
{

	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
