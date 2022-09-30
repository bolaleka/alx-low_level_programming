#include "main.h"

/**
 * main -  Entry point
 * @argc: argument count
 * @argv: argument value
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		while (i < argc && argv[i])
		{
			i++;
		}
		printf("%d\n", i - 1);
	}
	return (0);
}
