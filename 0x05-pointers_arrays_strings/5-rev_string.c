#include "main.h"
/**
 * rev_string - reverse string
 * @s : string parameter to reverse
 */

void rev_string(char *s)
{
	int l = 0, i = 0;
	char t;

	for (i = 0; s[i]; i++)
		l++;

	for (i = 0; i < l / 2; i++)
	{
		t = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = t;
	}
}
