#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: pointer to head node of the list
 * Return: the number of the nodes
 */
size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
