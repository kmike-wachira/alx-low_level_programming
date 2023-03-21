#include "main.h"
/**
 * _islower - function to print alphabets
 *
 * Description : take any input return 1 or 0
 *
 *@c : take in input for character to check
 *
 * Return : 1 if character is lcase , 0 if otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
