#include "main.h"

/**
 * _strlen - Print length of a string
 * @s: input string
 *
 * Return: integer
 */
unsigned int _strlen(char *s)
{
	unsigned int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
