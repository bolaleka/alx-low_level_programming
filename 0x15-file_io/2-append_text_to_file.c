#include "main.h"
#include "./2-strlen.c"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file to be created
 * @text_content: string to add to filename
 *
 * Return: Integer
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = _strlen(text_content);
	write(fd, text_content, len);
	return (1);
}
