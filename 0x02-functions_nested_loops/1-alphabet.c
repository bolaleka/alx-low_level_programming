#include "main.h"
/**
 * print_alphabet - Print 'a' to 'z' with a new line
 *
 * Return: No return value
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
