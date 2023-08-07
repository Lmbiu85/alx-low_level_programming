#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file
 * @filename: path of the file to read
 * @letters: number of letters to read and print
 * Return: number of letters readed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, j, y;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	j = read(a, buffer, letters);
	y = write(STDOUT_FILENO, buffer, r);

	if (a == -1 || j == -1 || y == -1 || y != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(a);

	return (y);
}
