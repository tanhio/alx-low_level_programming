#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to the file
 * @text_content: a pointer to string to add at the end of the file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(file);

return (1);
}
