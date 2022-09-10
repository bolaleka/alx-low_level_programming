#include <stdio.h>

/**
  * main - Engtry point
  * Print all possible different combination of two digits
  *
  * Return: 0 Always (Success)
  */
int main(void)
{
	unsigned int i;
	unsigned int j;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(44);
				putchar(32);
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
