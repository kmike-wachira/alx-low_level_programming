#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: always 0 (Success)
 */
int main(void)
{
	int no;
	char letter;

	for (no = 0; no < 10 ; no++)
	{
		putchar((no % 10) + '0');
	}
	for (letter = 'a'; letter <= 'f' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
