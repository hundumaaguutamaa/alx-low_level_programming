#include "lists.h"

/**
 * free_dlistint - Function to free a list.
 * @head: pointer
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list_ptr;

	while (head)
	{
		list_ptr = head;
		head = head->next;

		free(list_ptr);
	}
}

