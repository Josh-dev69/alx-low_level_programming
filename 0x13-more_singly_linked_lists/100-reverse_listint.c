#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: A pointer to a pointer to the first node of the linked list.
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;
	/* Loop through the linked list */
	while (current != NULL)
	{
		next = current->next;/* Save the next node */
		current->next = prev;/* Reverse the direction of the current node */
		/* Move the prev and current pointers forward */
		prev = current;
		current = next;
	}
	/* Update the head to point to the new first node */
	*head = prev;
	return (*head);
}
