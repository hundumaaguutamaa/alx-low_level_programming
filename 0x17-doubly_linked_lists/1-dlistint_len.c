#include "lists.h"
/**
 *dlistint_len - prints number of nodes.
 *@h: pointer node.
 *
 *Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}

