#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: letters
 * Return: c, write. or 0 if it error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buffer, letters);
	c = write(1, buffer, b);
	if ((a == -1) || (b == -1) || (c == -1) || (c != b))
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(a);
	return (c);
}
