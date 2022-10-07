#include "main.h"
#include "./2-strlen.c"

/**
 * string_nconcat - function concat two strings
 * @s1: first string
 * @s2: second string
 * @n: input length
 *
 * Return: string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, k;

	if (n == 0)
		exit(1);
	if (s1 == NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * 1);
		s[0] = '\0';
		return (s);
	} else if (s1 != NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * (_strlen(s1) + 1));
			for (k = 0; k < _strlen(s1); k++)
				s[k] = s1[k];
		return (s);
	}
	if (n >= _strlen(s2))
		s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	else
		s = malloc(sizeof(char) * (_strlen(s1) + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < _strlen(s1) && s1[i] != '\0'; i++)
		s[i] = s1[i];
	if (n < _strlen(s2))
	{
		for (j = 0; j < n; j++)
			s[i + j] = s2[j];
	} else if (n >= _strlen(s2))
	{
		for (j = 0; j < _strlen(s2); j++)
			s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	return (s);
}
