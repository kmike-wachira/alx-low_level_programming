#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Return: always 0 (Success)
 */
int main(void)
{
	char myletter;

	for (myletter = 'z'; myletter >= 'a'; myletter--)
		putchar(myletter);
	putchar('\n');
	return (0);
}
