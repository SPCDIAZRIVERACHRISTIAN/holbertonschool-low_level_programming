#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s:  string in reverse
 *
 */
void print_rev(char *s)
{
	int charac = 0;
	int rev;

	while (s[charac] != '\0')
		charac++;
	for (rev = charac - 1; rev >= 0; rev--)
		_putchar(s[rev]);
	_putchar('\n');
}
