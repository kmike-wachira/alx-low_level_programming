#include "main.h"

/**
 * *_strcat - function to concatenate 2 strs
 *
 * @dest : destination text
 * @src : the text to concatenate
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int count1;
	int count2;

	count1 = 0;

	while (dest[count1] != 0)
	{
		count1++;
	}

	count2 = 0;
	while (src[count2] != 0)
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	return (dest);
}
