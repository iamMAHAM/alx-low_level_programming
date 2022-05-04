#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include "main.h"

/**
 * create_file - Create a file
 * @filename: the file name
 * @text_content: the text content
 * Return: 1 on success otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, status, length;

	if (!filename) /*filename == NULL*/
		return (-1);


	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	
	length = strlen(text_content);
	printf("%d", length);

	if (!text_content)
		return (1);

	status = write(fd, text_content, length);

	if (status == -1)
		return (-1);
	
	close(fd);
	return (1);
}
