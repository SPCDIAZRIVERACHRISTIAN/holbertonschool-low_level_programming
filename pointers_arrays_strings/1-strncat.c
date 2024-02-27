#include "main.h"

/**
 * _strncat - concactanates two strings
 * @dest: one of the strings to be concactenated
 * @src: other string
 * @n: number of bytes
 * Return: pointing to th end of the string
 */
char *_strncat(char *dest, char *src, int n)
{
	int delta, whiskey;

	whiskey = 0;
	delta = 0;

	while (dest[whiskey] != '\0')
		whiskey++;
	while (src[delta] != '\0' && delta < n)
	{
		dest[whiskey] = src[delta];
		whiskey++;
		delta++;
	}
	dest[whiskey] = '\0';
	return (dest);
}
