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
	int i, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str = str_concat(str, av[i]);
		str = str_concat(str, "\n");
	}
	return (str);
}
