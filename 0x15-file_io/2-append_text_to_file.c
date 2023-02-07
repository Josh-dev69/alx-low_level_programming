#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: filename.
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on SUCCESS, otherwise, -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, write_byte;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		nletters = 0;
		while (text_content[nletters])
			nletters++;
		write_byte = write(fd, text_content, nletters);
		if (write_byte == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
