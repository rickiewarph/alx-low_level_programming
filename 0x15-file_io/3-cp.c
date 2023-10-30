#include "main.h"

/**
 * main - function to copy content from file a to file b
 * @argc: argument count
 * @argv: arguement vector
 * Return: 1(success) or exit(otherwise)
 */

int main(int argc, char *argv[])
{
	int src, dest, readf = 1024, writtn, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: op file_from file_to\n");
		exit(97);
	}
	src = (open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | 0_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (readf == 1024)
	{

		readf = read(src, buf, sizeof(buf));
		if (readf == -1)
			check_IO_stat(-1, -1, argv[1], '0');
		writtn = write(dest, buf, readf);
		if (writtn == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - checks if a file can be closed or opened
 * @stat: descriptot of the file to open
 * @filename: name of the file
 * @fd: file descriptor
 */

void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat = -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == '0' && stat = -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
		exit(99);
	}
}


