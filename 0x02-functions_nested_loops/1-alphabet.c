#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 *print_alphabet - function to print alphabets
 *
 *
 */
void print_alphabet(void)
{
	char i = 'a';

	for (i; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
