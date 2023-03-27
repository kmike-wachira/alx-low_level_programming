#include "main.h"

/**
 * swap_int - function to swap values
 * @a : parameter 1
 * @b :parameter 2
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;

	*b = *a;

	*a = c;
}
