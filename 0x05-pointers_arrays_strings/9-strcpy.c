#include "main.h"
#include "./2-strlen.c"
/**
 * _strcpy - copy string pointed to by src including null byte
 * @dest: destination param
 * @src: source param
 *
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	if (dest == NULL)
		return (NULL);
	len = _strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
