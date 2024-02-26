#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int print = 0;
	
	while (*(str + print) != '\0');
		print++;
	return (print);
}
