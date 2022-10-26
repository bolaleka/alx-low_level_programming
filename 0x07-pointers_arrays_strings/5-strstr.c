#include "main.h"
#include "./2-strlen.c"

/**
 * _strstr - function that locates a substring
 * @haystack: the main string
 * @needle: substring to search for
 *
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int count;

	if (_strlen(needle) == 0)
		return (haystack);
	for (i = 0; i  < _strlen(haystack); i++)
	{
		count = 0;
		for (j = 0; j < _strlen(needle); j++)
		{
			if (needle[j] == haystack[i])
			{
				count++;
				i++;
			} else
				break;
		}
		if (_strlen(needle) == count)
			return (needle);
	}
	return (NULL);
}
