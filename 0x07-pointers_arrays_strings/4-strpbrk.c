#include "main.h"
#include "./2-strlen.c"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string param
 * @accept: accept param
 *
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len1, len2, check;
	char *str;

	len1 = _strlen(s);
	len2 = _strlen(accept);
	str = NULL;
	for (i = 0; i < len1; i++)
	{
		check = 0;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				check = 1;
				break;
			}
		}
		if (check == 1)
		{
			str = s + i;
			break;
		}
	}
	return (str);
}
