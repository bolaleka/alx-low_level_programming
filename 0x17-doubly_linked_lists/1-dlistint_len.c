#include "lists.h"

/**
 * dlistint_len - Print double link list element
 * @h: list head
 *
 * Return: Integer
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
