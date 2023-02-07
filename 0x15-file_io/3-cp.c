#include "main.h"
#include <stdio.h>

#define BUFSIZE 1024

int open_file(const char *file, int flags);
void close_file(int fd);
void read_file(int fd_from, int fd_to);

/**
 * main - Entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open_file(argv[1], O_RDONLY);
	file_to = open_file(argv[2], O_CREAT | O_TRUNC | O_WRONLY);
	read_file(file_from, file_to);
	
	close_file(file_from);
	close_file(file_to);
	return (0);
}

/**
 * open_file - Function to open a file
 * @file: file path to open
 * @flag: the flags to use when opening the file
 * Return: the file descriptor.
 */
int open_file(const char *file, int flags)
{
	int fd; 
	
	fd= open(file, flags, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open %s\n", file);
		exit(98);
	}
	return (fd);
}

/**
 * close_file - Function to close the file
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	int cl;
	
	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_file - Function to read the file
 * @fd_from: file descriptor of the file to read data from.
 * @fd_to: file descriptor of the file to write data to.
 */
void read_file(int fd_from, int fd_to)
{
	char buf[BUFSIZE];
	int rd, wr;
	
	while ((rd = read(fd_from, buf, BUFSIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write\n");
			exit(99);
		}
	}
}
