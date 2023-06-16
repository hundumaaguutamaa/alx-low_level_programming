 #include "lists.h"

/**
 * print_dlistint - prints elements of a dlistint_t list. 
 * @h: head of the list.
 * 
 * Return: The number of nodes.
 */
    size_t print_dlistint(const dlistint_t *h)
{
	int numof_node;

	numof_node = 0;

	if (h == NULL)
		return (numof_node);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		numof_node++;
		h = h->next;
	}

	return (numof_node);
}

