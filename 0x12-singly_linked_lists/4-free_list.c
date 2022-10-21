#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: first element of the list
 * Return: no return
 */
void free_list(list_t *head)
{
	struct list_s *temp = NULL;
	struct list_s *a =  NULL;

	temp = head;
	while (temp != NULL)
	{
		a = temp->next;
		free(temp->str);
		free(temp);
		temp = a;
	}
	head = NULL;
}
