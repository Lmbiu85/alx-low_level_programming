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
	int a, c = 0, r;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	if (a == -1) /*If it fails*/
	{
		free(buffer);
		return (0);
	}
	r = read(a, buffer, letters);
	if (r == -1) /*If it fails*/
	{
		close(a); /*Close file*/
		free(buffer);
		return (0);
	}
	while (c < r)
	{
		if (write(STDOUT_FILENO, &buffer[c], 1) == -1)
		{
			close(a);
			free(buffer);
			return (0);
		}
		c++;
	}
	close(a);
	free(buffer);
	return (r);
}
