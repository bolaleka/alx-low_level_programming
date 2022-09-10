#include <stdio.h>

/**
  * main - Entry point
  * Print possible different number of three digits
  *
  * Return: Always 0
  */
int main(void)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < '7')
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
