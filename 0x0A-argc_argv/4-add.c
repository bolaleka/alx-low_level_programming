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
	int i, sum, j;

	sum = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("%s\n", "Error");
				return (0);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
