#include "lists.h"
/**
 * delete_dnodeint_at_index - Delets the nth node.
 * @head: linked list to print.
 * @index: index of node.
 *
 * Return: 1 if it succeeded, if not -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x;
	dlistint_t  *before, *after, *end;

	if (head == NULL)
		return (-1);

	while ((**head).prev != NULL)
		*head = (**head).prev;
	end = *head;

	if (index == 0)
	{
		end = end->next;
		if (end != NULL)
			end->prev = NULL;
		end = *head;
		*head = end->next;
	}
	else
	{
		for (x = 0; x != index && ind->next != NULL; x++)
			end = end->next;
		if (index > x)
			return (-1);

		before = end->prev;
		after = end->next;

		if (after == NULL)
			before->next = NULL;
		else
		{
			before->next = after;
			after->prev = before;
		}
	}

	free(end);

	return (1);
}

