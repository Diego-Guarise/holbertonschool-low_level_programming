#include "main.h"
#include <string.h>
/**
  * create_file - Create a function that creates a file.
  * @filename: file
  * @text_content: text
  * Return: 1 if success or -1 if fail
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t o, w = 0, i = 0;

	if (!filename)
		return (-1);
	o = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	if (text_content)
	{
		i = strlen(text_content);
		w = write(o, text_content, i);
	}
	close(o);
	if (w != i)
		return (-1);
	return (1);
}
