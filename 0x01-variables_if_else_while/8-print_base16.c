#include <stdio.h>

/**
  * main - Entry port
  * Print numbers in base 16
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char i;
	char alpha;

	i = '0';
	alpha = 'a';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
