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
	unsigned int i, j, t, p;


	if (s1 != NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * _strlen(s1) + 1);
		for (t = 0; t < _strlen(s1); t++)
			s[t] = s1[t];
		return (s);
	} else if (s1 == NULL && s2 != NULL)
	{
		s = malloc(sizeof(char) * _strlen(s2) + 1);
		for (p = 0; p < _strlen(s2); p++)
			s[p] = s2[p];
		return (s);
	} else if (s1 == NULL && s2 == NULL)
	{
		s = malloc(sizeof(char) * 1);
		s[0] = '\0';
		return (s);
	} else if (n < _strlen(s2))
	{
		s = malloc(sizeof(char) * (_strlen(s1) + n) + 1);
		for (i = 0; i < _strlen(s1) && s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; j < n && s2[j] != '\0'; j++)
			s[i + j] = s2[j];
	}
	else
	{
		s = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
		for (i = 0; i < (_strlen(s1) + _strlen(s2)) && s1[i] != '\0'; i++)
			s[i] = s1[i];
		for (j = 0; j < (_strlen(s1) + _strlen(s2)); j++)
			s[i + j] = s2[j];
	}
	s[_strlen(s2) + i] = '\0';
	return (s);
}
