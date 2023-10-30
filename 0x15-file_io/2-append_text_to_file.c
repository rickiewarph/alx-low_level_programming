#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append
 * @text_content: content to add to a file
 * Return: 1(success), -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fil_f;
	int lettersf;
	int rdr;

	if (filename)
		return (-1);
	fil_f = open(filename, O_WRONLY | O_APPEND);
	if (fil_f == -1)
		return (-1);
	if (text_content)
	{
		for (lettersf = 0; text_content[lettersf]; lettersf++)
			;
		rdr = write(fil_f, text_content, lettersf);

		if (rdr == -1)
			return (-1);
	}
	close(fil_f);
	return (1);
}
