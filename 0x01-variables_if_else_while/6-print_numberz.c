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

	for (no = 0; no < 10 ; no++)
	{
		putchar((no % 10) + '0');
	}
	putchar('\n');
	return (0);
}
