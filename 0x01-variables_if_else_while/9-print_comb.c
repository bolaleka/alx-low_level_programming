#include <stdio.h>

/**
  * main - Entry point
  * Print all possible combination of single digit
  *
  * Return: 0  (Success)
 */
int main(void)
{
	unsigned int i;

	i = '0';
	while (i <= '9')
	{
		putchar(i);
		if (i < '9')
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
