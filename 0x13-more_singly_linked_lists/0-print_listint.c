#include "lists.h"

/**
 * print_listint - function that print all element of listint_t
 * @h:  list pointer
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
