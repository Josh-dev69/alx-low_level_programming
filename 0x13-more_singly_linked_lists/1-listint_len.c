#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: pointer to head node of the list
 * Return: the number of the nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
