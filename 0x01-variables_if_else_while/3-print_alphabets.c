#include <stdio.h>

/**
  * main - Entry point
  * Program to print lower and upper case letter
  *
  *Return: 0 (Success)
  */
int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
