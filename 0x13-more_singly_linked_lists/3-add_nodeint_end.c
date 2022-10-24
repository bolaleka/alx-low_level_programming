#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of list
 * @head: list param
 * @n: length
 *
 * Return: listint
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *cur;
	listint_t *last;

	cur = malloc(sizeof(listint_t));
	if (cur == NULL)
		return (NULL);
	cur->n = n;
	cur->next = NULL;
	if (!head)
		return (NULL);
	if (*head)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = cur;
		return (last);
	} else
		*head = cur;
	return (cur);
}
