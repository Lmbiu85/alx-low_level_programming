#include "main.h"
#define BUFFERSIZE 1204

/**
 * main - cps contents of one file to another
 * @argc: arguement count
 * @argv: arguement list: file names
 * Return: 0;
 */
int main(int argc, char **argv)
{
	int fd_src, fd_dest, rf, res;
	char buffer[BUFFERSIZE];

	mode_t mode_file = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode_file);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	rf = res = 1;
	while (rf)
	{
		rf = read(fd_src, buffer, BUFFERSIZE);
		if (rf == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (rf > 0)
		{
			res = write(fd_dest, buffer, rf);
			if (res == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	res = close(fd_src);
	if (res == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd_src %d\n", fd_src), exit(100);

	res = close(fd_dest);

	if (res == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd_src %d\n", fd_dest), exit(100);
	return (0);
}
