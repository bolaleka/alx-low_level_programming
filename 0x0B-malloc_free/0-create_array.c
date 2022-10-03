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

	str = malloc(sizeof(char) * size);
	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	str[size] = '\0';
	return (str);
}
