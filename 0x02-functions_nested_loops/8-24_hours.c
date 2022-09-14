#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
 *Return: 0
 */
void jack_bauer(void)
{
	int i;
	int j;


	i = 0;
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
			++j;
		}
		++i;
	}
}
