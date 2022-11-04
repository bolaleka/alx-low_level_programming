#include "main.h"

/**
 * read_textfile - Read a text file and prints it to the POSIX standard output.
 * @filename: file to read
 * @letters: Size of character to be read
 *
 * Return: integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n1, n2;
	char *str;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(fd);
		return (0);
	}
	n1 = read(fd, str, letters);
	close(fd);
	n2 = write(STDOUT_FILENO, str, n1);
	free(str);
	if (n1 != n2)
		return (0);
	return (n2);
}
