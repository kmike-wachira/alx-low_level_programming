#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: always 0 (Success)
 */
int main(void)
{
	int no, small;

	for (no = 0; no < 10; no++)
	{
		for (small = no + 1; small < 10 ; small++)
		{
			putchar((no % 10) + '0');
			putchar((small % 10) + '0');
			if (no == 8 && small == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
