#include "main.h"
#include "./2-str_concat.c"

/**
 * argstostr - Concatenates all the argument of a program
 * @ac: argument count
 * @av: argument value
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	unsigned int i, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < (unsigned int)ac; i++)
		len += _strlen(av[i]) + 1;
	str = malloc(sizeof(char) * len - 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (unsigned int)ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}
	return (str);
}
