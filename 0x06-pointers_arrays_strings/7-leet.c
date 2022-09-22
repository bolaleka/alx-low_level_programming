#include "main.h"

/**
 * leet - functions that encodes a string into 1337
 * @s: - input string
 *
 * Return: string
 */
char *leet(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = 52;
		} else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = 51;
		} else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = 48;
		} else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = 55;
		} else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = 49;
		}
		i++;
	}
	return (s);
}
