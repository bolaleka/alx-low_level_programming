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

	len = _strlen(str);
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';
	return (s);
}
