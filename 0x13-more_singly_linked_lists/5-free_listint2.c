#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: Head list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *n;

	if (!head)
		return;
	n = *head;
	while (*head)
	{
		while (n)
		{
			tmp = n;
			n = n->next;
			free(tmp);
			*head = NULL;
		}
	}
}
