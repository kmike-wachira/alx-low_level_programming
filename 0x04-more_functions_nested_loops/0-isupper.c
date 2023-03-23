#include "main.h"
/**
 * _isupper - check whether character is upper
 *
 * Return: Always 0 if false or 1 if true
 *
 * @c : Charater to check
 */

int _isupper(int c)
{
	if (c >= 'A' || c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
