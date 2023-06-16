#include "lists.h"

/**
 * sum_dlistint - Function that calculates and return sum elements.
 * @head: The passed in linked list.
 *
 * Return: The sum of the linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;  
	int lst_sum = 0;  

	if (head == NULL)
		return (0);

	do {
		lst_sum += ptr->n;  
		ptr = ptr->next;  
	} while (ptr != NULL);  

	return (lst_sum);  
}

