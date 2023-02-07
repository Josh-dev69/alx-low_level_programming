#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: actual number of letters, otherwise 0 if function fails is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, written_bytes;
	char *buf;
	/* Return 0 if filename is NULL */
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /* open file for readonly */
	if (fd == -1)
		return (0);
	/* Allocate a buffer for reading the file */
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);
	read_bytes = read(fd, buf, letters);
	written_bytes = write(STDOUT_FILENO, buf, read_bytes);
	close(fd);
	free(buf);
	return (written_bytes);
}
