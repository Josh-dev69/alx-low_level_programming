#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *h;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	h = *head;
	/* check if current node is not null and, traverse to find the first nod */
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev; /* set h to point to the node */
	}
	temp->next = h;/* set next pointer to h */
	if (h != NULL)
		h->prev = temp;
	*head = temp;
	return (temp);
}
