#include "main.h"
#include "./2-strlen.c"
/**
 * create_file - function that creates a file.
 * @filename: File to be created
 * @text_content: Content to write in file created
 *
 * Return: Integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		return (1);
	}
	len = _strlen(text_content);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	write(fd, text_content, len);
	return (1);
}
