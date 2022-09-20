#include "main.h"
#include "./2-strlen.c"
/**
 * puts_half - Prints half of a string
 * @str: input string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, halflen;

	len = _strlen(str);
	i = len / 2;
	if (len % 2 != 0)
	{
		halflen = (len - 1) / 2;
		while (++halflen < len)
		{
			_putchar(str[halflen]);
		}
	} else
	{
		while (i < len)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
