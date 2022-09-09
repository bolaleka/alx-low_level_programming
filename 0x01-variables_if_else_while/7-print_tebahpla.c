#include <stdio.h>

/**
  * main - Entry port
  * Print alphabet in reverse order
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
