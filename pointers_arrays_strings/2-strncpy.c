#include "main.h"

/**
 * _strncpy - copying a string
 * @dest: string where I want to copy
 * @src:string I want to copyi
 * Return: points to the end of string dest
 * @n: number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int alpha;

	alpha = 0;

	while (dest[alpha] != '\0' && alpha < n)
	{
		dest[alpha] = src[alpha];
		alpha++;
	}

	while (alpha < n)
	{
		dest[alpha] = '\0';
		alpha++;
	}

	return (dest);
}
