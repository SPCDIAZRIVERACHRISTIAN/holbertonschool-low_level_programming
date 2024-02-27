#include "main.h"

/**
 * _strcat - concactenates two strings.
 * @dest: the string
 * @src: string source to be concactenated with dest.
 * Return: points to the end of the string.
 */
char *_strcat(char *dest, char *src)
{
	int india, charlie;

	india = 0;

	charlie = 0;

	while (dest[india] != '\0')
		india++;

	while (src[charlie] != '\0')
	{
		dest[india] = src[charlie];
		charlie++;
		india++;
	}

	dest[india] = '\0';

	return (dest);
}

