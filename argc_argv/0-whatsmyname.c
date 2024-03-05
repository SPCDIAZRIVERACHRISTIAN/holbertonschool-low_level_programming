#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function prints the name of the file
 * @argc: counts the argument in this case we did not use it thats why it has __attribute__((unused))
 * @argv: counts the string array
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return(0);
}
