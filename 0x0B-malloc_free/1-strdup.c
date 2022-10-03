#include "main.h"
#include "./2-strlen.c"
/**
 * _strdup - Function retuen pointer to new allocated space
 * @str: input string
 *
 * Return: string
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
