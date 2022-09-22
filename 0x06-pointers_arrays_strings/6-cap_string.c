#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: input string
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
				s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}') && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			if (s[i] == '\t')
				s[i] = ' ';
			s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}
	return (s);
}