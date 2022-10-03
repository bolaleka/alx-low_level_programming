#include "main.h"

/**
 * create_array - Creates an array of char, and initialiaze
 * @size: input size
 * @c: input character
 *
 * Return: pointer to array / NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	if (str != NULL)
		return (str);
	return (NULL);
}
