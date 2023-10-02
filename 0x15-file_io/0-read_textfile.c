#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints to stdout
 * @filename - name of text file
 * @letters - size of letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer;

	if (fd == NULL)
	{
		return 0;
	}
	fd = open(filename, O_RDONLY);
	if (filename == -1)
	{
		return 0;
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return 0;
	}
	ssize_t bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return 0;
	}
	close(fd);
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free buffer;
	if (bytes_read != bytes_written)
	{
		return 0;
	}
	return (bytes_written);
}
