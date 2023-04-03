#include "Lists.h"

/**
* print_Listint - 
*
* @h: 
* Return: 
*/ 

size_t print_listint(const listint_t *h)
{
	size_t count = 1;

	if (h)
	{
		printf("%i\n", h->n);

		if (h->next)
			count += print_listint(h->next);

		return (count);
	}
	else
		return (0);
}

