#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: unused variable
 * @argv: prints array of arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
		return (0);
}
