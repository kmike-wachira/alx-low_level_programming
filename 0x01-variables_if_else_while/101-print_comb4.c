#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *
 *Return: always 0 (Success)
 */
int main(void)
{
	int no, small, large;

	for (no = 0; no < 10; no++)
	{
		for (small = no + 1; small < 10 ; small++)
		{
			for (large = small + 1; large < 10 ; large++)
			{
				putchar((no % 10) + '0');
				putchar((small % 10) + '0');
				putchar((large % 10) + '0');
				if (no == 7 && small == 8 && large == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
