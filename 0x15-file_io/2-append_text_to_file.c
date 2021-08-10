#include "main.h"
#include <string.h>
/**
  * append_text_to_file - Create a function that creates a file.
  * @filename: file
  * @text_content: text
  * Return: 1 if success or -1 if fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, i = 0, w = 0;

	if (!filename)
		return (-1);
	o = open(filename, O_APPEND | O_WRONLY);
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
