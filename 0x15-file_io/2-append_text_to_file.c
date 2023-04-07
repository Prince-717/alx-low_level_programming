#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append text to
 * @text_content: the NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int len = 0;
	int wrote = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		wrote = write(file_d, text_content, len);
		if (wrote == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
