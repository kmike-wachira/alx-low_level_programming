#include "main.h"
/**
 * rev_string - reverse string
 * @s : string parameter to reverse
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int l;

	while (s[i] != '\0')
	{
		i++;
	}

	l = i;
	i = 0;
	j = l - 1;

	while (i <= j)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;

		i++;
		j--;
	}
}
