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
	ssize_t o, r, w;
	char *words;

	if (filename == NULL)
		return (0);

	words = malloc(sizeof(char) * letters);
	if (words == NULL)
	{
		free(words);
		return (0);
	}

	o = open(filename, O_RDONLY);
	r = read(o, words, letters);
	w = write(1, words, letters);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(words);
		return (0);
	}
	free(words);
	return (w);
}
