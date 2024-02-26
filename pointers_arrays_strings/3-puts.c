#include "main.h"

/**
 * _puts - makes a function that prints a string
 *
 * @str: input string
 * Return: no return
 */
void_puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
