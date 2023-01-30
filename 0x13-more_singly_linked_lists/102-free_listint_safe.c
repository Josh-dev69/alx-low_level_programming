#include "lists.h"

/**
 * free_listint_safe - Frees a linked list, even if it has a loop.
 * @h: A pointer to a pointer to the first node of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h;
	size_t count = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		count++;
		if (slow == fast)
		{
			while (*h != slow)
			{
				listint_t *temp = *h;
				*h = (*h)->next;
				count++;
				free(temp);
			}
			free(*h);
			*h = NULL;
			return (count);
		}
	}
	while (*h)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		count++;
		free(temp);
	}
	*h = NULL;
	return (count);
}
