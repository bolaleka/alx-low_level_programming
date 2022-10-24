#include "lists.h"

/**
 * pop_listint - function deletes head node of list
 *
 *@head: pointer to pointer of head
 *
 * Return: head node's data, or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (*head == NULL)
		return (0);
	tmp = *head;
	*head = tmp->next;
	i = tmp->n;
	free(tmp);
	return (i);
}
