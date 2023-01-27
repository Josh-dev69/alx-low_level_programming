#include "lists.h"

/**
 * free_list - Function that frees a linked list
 * @head: pointer to the head node of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
