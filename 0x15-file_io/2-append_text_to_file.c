#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path of the file
 * @text_content: content to append at end of file
 * Return: 1 on Success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count;
	size_t len;

	if (filename == NULL)
		return (-1);

	/* Open file and get file descriptor */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);

	/* write into file description */
	count = write(fd, text_content, len);
	if (count == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
