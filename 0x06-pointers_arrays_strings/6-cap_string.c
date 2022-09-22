#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: input string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		} else if (str[i] == '.' && str[i + 1] >= 'a' && str[i] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
