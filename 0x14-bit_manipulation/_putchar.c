#include <unistd.h>

/**
  * main - putchar function
  * Print character in standard output
  *
  * Return: 0
  */
int _putchar(int c)
{
        return (write(1, &c, 1));
}

