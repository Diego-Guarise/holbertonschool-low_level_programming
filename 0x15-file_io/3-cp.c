#include <string.h>
#include "main.h"

/**
 *main- cp command
 *@argc: argument count
 *@argv: argument list
 *Return: 0 if no errors
 */
int main(int argc, char *argv[])
{
	char buffer[1025];
	ssize_t from, to, c, w;
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	if (!argv[1])
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	c = 1024;
	while (c == 1024)
	{
		c = read(from, buffer, c);
		w = write(to, buffer, c);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	close(from);
	close(to);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", from), exit(100);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %ld\n", to), exit(100);
	return (0);	
}
