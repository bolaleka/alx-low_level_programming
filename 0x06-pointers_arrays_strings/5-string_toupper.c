#include "main.h"

/**
 * string_toupper - Change all lowercase letters of a string to uppercase
 * @ptr: input string
 *
 * Return: char *
 */
char *string_toupper(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] = ptr[i] - 32;
		}
		i++;
	}
	return (ptr);
}
