#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*declare function print alphabet*/
void print_alphabet(void);

int main(void)
{
	for (int j = 0; j < 10; j++)
	{
		print_alphabet();
	}
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
		putchar(i);
	}
	putchar('\n');
}
