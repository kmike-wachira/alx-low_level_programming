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
	for (myletter = 'a'; myletter <= 'z'; myletter++)
		putchar(myletter);
	for (myletter = 'A'; myletter <= 'Z'; myletter++)
		putchar(myletter);
	putchar('\n');
	return (0);
}
