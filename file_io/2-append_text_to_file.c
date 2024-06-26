#include "main.h"
#include <stdio.h>

/**
* append_text_to_file - Appends text at the end of a file
* @filename: The filename
* @text_content: The string to append
*
* Return: -1 on failure, 1 otherwise.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);

	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
