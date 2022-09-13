#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59
 *
 *Return: 0
 */
void jack_bauer(void)
{
	char i;
	char j;
	char k;
	char l;

	i = '0';
	while (i <= '2')
	{
		j = '0';
		while (j <= '3')
		{
			k = '0';
			while (k <= '5')
			{
				l = '0';
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}

}
