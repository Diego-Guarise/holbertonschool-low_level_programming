#include "main.h"
/**
  * create_file - Create a function that creates a file.
  * @filename: file
  * @text_content: text
  * Return: 1 if success or -1 if fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t o, w, i;

	if (!filename | !text_content)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	if (text_content)
	{
		w = write(o, text_content, i);
		if (w == -1)
			return (-1);
	}
	close(o);
	if (w != i)
		return (-1);
	return (1);
}
