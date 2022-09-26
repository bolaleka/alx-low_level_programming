#include "main.h"
#include "./2-strlen.c"

/**
 * _strchr - Function locates a chracter in string
 * @s: string to search
 * @c: Character to searcf for
 *
 * Return: string
 */
char *_strchr(char *s, char c)
{
	int j;

	j = _strlen(s);
	while (j > 0)
	{
		if (*s != c)
			j--;
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
