#include <unistd.h>

/**
  * main - putchar entry point
  * The program print like of puchar
  *
  * Return: 0
  */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
