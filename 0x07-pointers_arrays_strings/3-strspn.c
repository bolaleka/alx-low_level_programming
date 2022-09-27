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
	unsigned int count;
	int len, i, j;

	count = 0;
	i = 0;
	len = _strlen(s);
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (len - count);
}
