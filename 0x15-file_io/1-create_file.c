#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 *  * create_file - Creates a file with specified conditions.
 *   * @filename: Name of the file to create.
 *    * @text_content: NULL terminated string to write to the file.
 *     *
 *      * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, const char *text_content)
{
	int file_id;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	file_id = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_id == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(file_id, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_id);
			return (-1);
		}
	}

	if (close(file_id) == -1)
	{
		return (-1);
	}
	return (1);
}
