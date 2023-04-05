#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A complete print of all elements of linked listint_t list.
 * @h: Pointer to the head of the linked list.
 *
 * Return:  Number of nodes in the  list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nm  = 0;

	while (h)
	{
		nm++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nm);
}

