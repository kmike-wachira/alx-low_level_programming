#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*declare function print alphabet*/

int main(void)
{
	int result;

	result = _islower('B');

	_putchar(result + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - function to print alphabets
 *
 * Description : take any input return 1 or 0
 *
 *@c : take in input for character to check
 *
 * Return : 1 if true and 0 if not true
 */
int _islower(int c)
{

	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
