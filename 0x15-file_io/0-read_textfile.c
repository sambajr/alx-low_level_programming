#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output.
 *   * @filename: Name of the file to read.
 *    * @letters: Number of letters to read and print.
 *     *
 *      * Return: Actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_id;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file_id = open(filename, O_RDONLY);

	if (file_id == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_id);
		return (0);
	}
	bytes_read = read(file_id, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(file_id);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(file_id);
		return (0);
	}

	free(buffer);
	close(file_id);
	return (bytes_written);
}

