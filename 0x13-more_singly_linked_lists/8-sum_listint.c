#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *holder = head;

	while (holder)
	{
		sum += holder->n;
		holder = holder->next;
	}

	return (sum);
}
