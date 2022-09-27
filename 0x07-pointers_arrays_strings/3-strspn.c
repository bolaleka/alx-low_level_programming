#include "main.h"
#include "./2-strlen.c"

/**
 * _strspn - Get the length of a prefix substring
 * @s: first param
 * @accept: second param
 *
 * Return: integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, seg;
	int len, len2, i, j;

	seg = 0;
	len = _strlen(s);
	len2 = _strlen(accept);
	for (i = 0; i < len; i++)
	{
		count = 0;
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				count = 1;
				break;
			}
		}
		if (count < 1)
			break;
		seg++;
	}
	return (seg);
}
