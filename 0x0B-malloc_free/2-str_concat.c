#include "main.h"
#include "./2-strlen.c"

/**
 * str_concat - function concatenates two strings
 * @s1: first param
 * @s2: second param
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, t, p, len;

	if (s1 != NULL && s2 == NULL)
	{
		str = malloc(sizeof(char) * _strlen(s1) + 1);
		for (t = 0;  t < _strlen(s1); t++)
			str[t] = s1[t];
		return (str);
	}
	if (s1 == NULL && s2 != NULL)
	{
		str = malloc(sizeof(char) * _strlen(s2) + 1);
		for (p = 0; p < _strlen(s2); p++)
			str[p] = s2[p];
		return (str);
	}
	if (s1 == NULL && s2 == NULL)
	{
		str = malloc(sizeof(char) * 1);
		str = NULL;
		return (str);
	}
	len = _strlen(s1) + _strlen(s2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1); i++)
		str[i] = s1[i];
	for (j = 0; j < _strlen(s2); j++)
		str[i + j] = s2[j];
	return (str);
}
