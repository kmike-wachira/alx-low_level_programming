#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j;
	for (j = 0; j < 10; j++)
	{
		print_alphabet_x10();
	}
	return (0);
}

/**
 *print_alphabet_x10 - function to print alphabets
 *
 *
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
