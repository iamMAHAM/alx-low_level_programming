#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of file
 * @filename: the file name
 * @text_content: the text content
 * Return: 1 on success otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, length;

	if (!filename) /*filename == NULL*/
		return (-1);


	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	length  = strlen(text_content);
	text_content[length + 1] = '\0';
	status = write(fd, text_content, length);

	if (status == -1) /*permission error or other*/
		return (-1);

	close(fd);
	return (1);
}
