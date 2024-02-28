#include "main.h"

/**
 * _strcmp - function to compare string 1 with string 2
 *
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: points to the comparison result
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
