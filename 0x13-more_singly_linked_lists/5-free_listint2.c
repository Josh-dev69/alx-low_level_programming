#include "lists.h"

/**
 * free_listint2 - Function that frees a linked list
 * @head: pointer to the head node of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		free(temp);
		temp = NULL;
		*head = NULL;
	}
}
