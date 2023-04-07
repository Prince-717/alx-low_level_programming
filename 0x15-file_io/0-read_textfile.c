#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: file name to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buf = malloc(sizeof(char) * (letters + 1));
	ssize_t bytes_read = read(fd, buf, letters);
	ssize_t bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[bytes_read] = '\0';

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes_read);
}
