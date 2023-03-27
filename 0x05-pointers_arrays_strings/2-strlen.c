#include "main.h"

/**
 * _strlen - get the length of a string
 * @s : the string to return the value
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	for (len = 0 ; s[len] != '\0' ; len++)
		;

	return (len);
}
