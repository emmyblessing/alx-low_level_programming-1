#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd,x, y;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	x = read(fd, buffer, letters);
	y = write(STDOUT_FILENO, buffer, x);

	if (fd == -1 || x == -1 || y == -1 || y != x)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
}
