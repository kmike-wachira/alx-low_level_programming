#include "main.h"
/**
 * _isdigit - check whether character is digit
 *
 * Return: Always 0 if false or 1 if true
 *
 * @c : Charater to check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
