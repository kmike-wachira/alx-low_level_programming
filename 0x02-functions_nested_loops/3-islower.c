#include "main.h"
/**
 * _islower - function to print alphabets.
 *
 * @c : The character to be checked.
 *
 * Return: 1 (Success) if character is lowercase, 0 (Failure)  otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
