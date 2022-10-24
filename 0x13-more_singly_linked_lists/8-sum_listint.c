#include "lists.h"

/**
 * sum_listint - function returns sum of all listint_t list
 *
 *@head:  head pointer
 *
 * Return: sum of all data, or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int i;

	i = 0;
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
