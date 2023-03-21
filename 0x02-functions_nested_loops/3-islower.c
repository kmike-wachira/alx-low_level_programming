#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/*declare function print alphabet*/
int _islower(int c);

int main(void)
{
	int result;

	result = _islower(87);

	putchar(result + '0');

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

	if (c >= 97 || c <= 122)
		return (1);
	else
		return (0);
}
