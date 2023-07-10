#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_buffer - Allocates memory for a buffer.
 * @file: The name of the file.
 *
 * Return: A pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_from_file - Reads data from a file.
 * @from: The source file descriptor.
 * @buffer: The buffer to store the data.
 *
 * Return: The number of bytes read.
 */
ssize_t read_from_file(int from, char *buffer)
{
	ssize_t r;

	r = read(from, buffer, 1024);
	if (from == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file descriptor %d\n", from);
		free(buffer);
		exit(98);
	}

	return (r);
}

/**
 * write_to_file - Writes data to a file.
 * @to: The destination file descriptor.
 * @buffer: The buffer containing the data.
 * @r: The number of bytes to write.
 * @file: The name of the file.
 */
void write_to_file(int to, char *buffer, ssize_t r, char *file)
{
	ssize_t w;

	w = write(to, buffer, r);
	if (to == -1 || w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		free(buffer);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of program arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description:
 *   - If the argument count is incorrect, exit with code 97.
 *   - If file_from does not exist or cannot be read, exit with code 98.
 *   - If file_to cannot be created or written to, exit with code 99.
 *   - If file_to or file_from cannot be closed, exit with code 100.
 */
int main(int argc, char *argv[])
{
	int from, to;
	char *buffer;
	ssize_t r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	r = read_from_file(from, buffer);
	write_to_file(to, buffer, r, argv[2]);

	while (r == 1024)
	{
		r = read_from_file(from, buffer);
		write_to_file(to, buffer, r, argv[2]);
	}

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
