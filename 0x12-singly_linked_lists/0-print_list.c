#include "lists.h"

/**
 * print_list - Function that prints all the elements of a list
 * @h: pointer to head node of the list
 * Return: the number of the nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
