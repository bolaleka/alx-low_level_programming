#include "lists.h"

/**
 * linstint_len - function that returns the number of elements in data struct
 * @h: struct head
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
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
