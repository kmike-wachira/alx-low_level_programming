#include "main.h"
/**
 * _isalpha - function to print alphabets.
 *
 * @c : The character to be checked.
 *
 * Return: 1 (Success) if character is lowercase, 0 (Failure)  otherwise.
 */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
