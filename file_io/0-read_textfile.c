#include "main.h"

/**
 * read_textfile - Writes a function that reads a text file and prints
 * @filename: name of the file to be read
 * @letters: number of letters
 *
 * Return: returns the written text and numbers
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *wordc;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	wordc = malloc(sizeof(char) * letters);
	if (wordc == NULL)
		return(0);

	r = read(fd, wordc, letters);
	w = write(STDOUT_FILENO, wordc, r);

	free(wordc);
	close(fd);

	return (w);
}
