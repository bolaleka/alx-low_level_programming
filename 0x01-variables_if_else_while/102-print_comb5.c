#include <stdio.h>

/**
  * main - Entry point
  * program that prints all possible combinations of two two-digit numbers
  *
  * Return: Always 0
  */
int main(void)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int t;

	i =  '0';
	while (i <= '9')
	{
		j = i;
		while (j <= '8')
		{
			k = j;
			while (k <= '9')
			{
				t = k + 1;
				while (t <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(t);
					if (i != '8')
					{
						putchar(44);
						putchar(32);
					}
					t++;
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

