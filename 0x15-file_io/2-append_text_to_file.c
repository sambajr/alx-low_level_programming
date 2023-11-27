#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 *  * append_text_to_file - Appends text to an existing file.
 *   * @filename: Name of the file to append text to.
 *    * @text_content: Text to append to the file.
 *     *
 *      * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_id;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	file_id = open(filename, O_WRONLY | O_APPEND);
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
		return (-1);

	return (1);
}
