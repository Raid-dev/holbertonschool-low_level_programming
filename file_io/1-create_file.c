#include "main.h"
#include <stdio.h>

/**
* create_file - Creates a file
* @filename: The filename to create
* @text_content: The string to write
*
* Return: -1 on failure, 1 otherwise.
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
