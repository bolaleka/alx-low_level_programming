#include "lists.h"

/**
 * add_nodeint - function add a new node at the begining of list
 * @head: first param
 * @n: Second param
 *
 * Return: listint
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cur;

	if (head != NULL)
	{
		cur = malloc(sizeof(listint_t));
		if (cur == NULL)
			return (NULL);
		cur->n = n;
		cur->next = *head;

		*head = cur;
		return (*head);
	}
	return (NULL);
}
