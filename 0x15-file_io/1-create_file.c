#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: filename.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on SUCCESS, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters, rw_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	nletters = 0;
	while (text_content[nletters])
		nletters++;
	rw_bytes = write(fd, text_content, nletters);
	if (rw_bytes == -1)
		return (-1);
	close(fd);
	return (1);
}
