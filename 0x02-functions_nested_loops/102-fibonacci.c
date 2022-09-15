#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int fb1;
	long int fb2;
	long int res;

	fb1 = 1;
	fb2 = 2;
	printf("%ld, ", fb1);

	for (i = 1; i <= 49; i++)
	{
		if (i < 49)
		{
			printf("%ld, ", fb2);
		} else
		{
			 printf("%ld", fb2);
		}
		res = fb1 + fb2;
		fb1 = fb2;
		fb2 = res;
	}
	printf("\n");

	return (0);
}
