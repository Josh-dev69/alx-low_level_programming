#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: pointer to the head node of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = NULL;
	}
}
