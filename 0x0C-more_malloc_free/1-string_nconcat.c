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
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = NULL;

	if (n < _strlen(s2))
		s = malloc(sizeof(char) * (_strlen(s1) + n) + 1);
	else
		s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (s == NULL)
		return (NULL);
	for (i =  0; i < _strlen(s1); i++)
		s[i] = s1[i];
	if (n < _strlen(s2))
	{
		for (j = 0; j < n; j++)
			s[i + j] = s2[j];
	} else
	{
		for (j = 0; j < _strlen(s2); j++)
			s[i + j] = s2[j];
	}
	return (s);
}
