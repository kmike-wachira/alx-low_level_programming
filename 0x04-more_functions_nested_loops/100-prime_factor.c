#include <stdio.h>
#include <math.h>

/**
 * main - main function
 *
 * Return: always 0
 *
 */

int main(void)
{
	int i;
	long mynum = 612852475143;

	for (i = (int) sqrt(mynum); i > 2; i++)
	{
		if (mynum % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
