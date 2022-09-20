#include "main.h"
#include "./2-strlen.c"
/**
 * puts2 - put even number
 * @str: input char
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, len;

	i = 0;
	len = _strlen(str);
	while (i < len)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
