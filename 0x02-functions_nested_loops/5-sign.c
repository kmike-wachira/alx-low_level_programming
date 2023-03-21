#include "main.h"
/**
 * print_sign - function to print the sign.
 *
 * @n : The character to be checked.
 *
 * Return: 1 if greater than zero, 0 is zero.-1 for -ve
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
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
