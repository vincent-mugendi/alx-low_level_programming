#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

/**
 * display_error - Displays an error message and
 * exits the program with the specified exit code.
 * @exit_code: The exit code to exit the program with.
 * @message: The error message to display.
 * @filename: The name of the file associated with the error.
 */
void display_error(int exit_code, const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

/**
 * copy_file - Copies the contents of one file to another.
 * @src_file: The source file name.
 * @dest_file: The destination file name.
 */
void copy_file(const char *src_file, const char *dest_file)
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
		display_error(98, "Error: Can't read from file %s\n", src_file);

	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (dest_fd == -1)
		display_error(99, "Error: Can't write to file %s\n", dest_file);

	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			display_error(99, "Error: Can't write to file %s\n", dest_file);
	}

	if (bytes_read == -1)
		display_error(98, "Error: Can't read from file %s\n", src_file);

	if (close(src_fd) == -1)
		display_error(100, "Error: Can't close fd %d\n", src_fd);

	if (close(dest_fd) == -1)
		display_error(100, "Error: Can't close fd %d\n", dest_fd);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		display_error(97, "Usage: cp file_from file_to\n", NULL);

	copy_file(argv[1], argv[2]);

	return (0);
}
