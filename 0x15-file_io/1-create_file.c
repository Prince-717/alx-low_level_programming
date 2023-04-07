#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - creates a file and writes text to it
 *
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	int length = 0;
	int bytes_written;

	if (!filename)
		return (-1);

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
		bytes_written = write(file_d, text_content, length);

		if (bytes_written == -1 || bytes_written != length)
		{
			close(file_d);
			return (-1);
		}
	}
	close(file_d);
	return (1);
}
