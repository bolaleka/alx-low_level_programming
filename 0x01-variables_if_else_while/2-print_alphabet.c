#include <stdio.h>

/**
  * main - Entry point
  * Program to print a -z
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
