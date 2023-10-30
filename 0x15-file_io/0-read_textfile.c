#include "main.h"

/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: no. of letters to read and print
 * Return: actual no. of letters that could be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fil_d;
	ssize_t lengthr, lengthw;
	char *buffer;

	if (filename == NULL)
		return (0);
	fil_d = open(filename, O_RDONLY);
	if (fil_d == -1)
		return (0);
	buffer = malloc(sizeof(char) + letters);
	if (buffer == NULL)
	{
		close(fil_d);
		return (0);
	}
	lengthr = read(fil_d, buffer, letters);
	close(fil_d);
	if (lengthr == -1)
	{
		free(buffer);
		return (0);
	}
	lengthw = write(STDOUT_FILENO, buffer, lengthr);
	free(buffer);
	if (lengthr != lengthw)
		return (0);
	return (lengthw);
}
