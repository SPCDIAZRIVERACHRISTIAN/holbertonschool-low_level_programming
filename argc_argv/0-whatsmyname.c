#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: counts the argument in this case not used
 * @argv: counts the string array
 *
 * Return: Always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
