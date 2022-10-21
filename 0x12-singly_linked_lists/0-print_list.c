#include "lists.h"

/**
 * print_list - link list function print all elements of a list
 * @h: first param
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
			i++;
		} else
		{
		printf("[%d] %s", h->len, h->str);
		i++;
		h = h->next;
		printf("\n");
		}
	}
	return (i);
}
