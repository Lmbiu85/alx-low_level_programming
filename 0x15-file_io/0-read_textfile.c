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
	char *buffer;
	int count;
	FILE *fp;

	if (filename == NULL)
		return (0);

	/* Open file */
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	/* allocate memory in buffer to read contents of fp */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read contents of fp */
	count = fread(buffer, sizeof(char), letters, fp);
	if (count == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	/* write to standard output */
	count = fwrite(buffer, sizeof(char), count, stdout);
	if (count == -1)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}
	fclose(fp);
	free(buffer);

	return (count);
}
