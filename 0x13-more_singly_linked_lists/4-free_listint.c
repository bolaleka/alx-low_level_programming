#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Head list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head->next)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
