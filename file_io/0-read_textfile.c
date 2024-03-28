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

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	wordc = malloc(sizeof(char) * letters);
	if (wordc == NULL)
		return(0);

	r = read(fd, wordc, letters);
	w = write(STDOUT_FILENO, wordc, r);

	if (w == -1 || w != r)
		return (0);

	free(wordc);
	close(fd);

	return (w);
}
