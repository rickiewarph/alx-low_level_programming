#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content to write within the file
 * Return: 1(success), -1(fail)
 */

int create_file(const char *filename, char *text_content)
{
	int fil_f;
	int letters_f;
	int rdr;

	if (filename)
		return (-1);
	fil_f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fil_f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (letters_f = 0; text_content[letters_f]; letters_f++)
		;
	rdr = write(fil_f, text_content, letters_f);
	if (rdr == -1)
		return (-1);
	close(fil_f);
	return (1);
}
