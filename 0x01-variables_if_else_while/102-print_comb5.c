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

	for (no = 0; no <= 98; no++)
	{
		for (small = no + 1; small <= 99; small++)
		{
			putchar((no / 10) + '0');
			putchar((no % 10) + '0');
			putchar(' ');
			putchar((small / 10) + '0');
			putchar((small % 10) + '0');
			if (no == 98 && small == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
