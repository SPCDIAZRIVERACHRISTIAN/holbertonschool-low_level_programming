#include <stdio.h>
#include "main.h"

/**
 * main - main function entry point
 * @argc: counts arguments in file
 * @argv: unused in this case
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
