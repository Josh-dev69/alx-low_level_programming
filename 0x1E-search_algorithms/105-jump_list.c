#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Jump search algorithm in a sorted list
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: Value to search for
 * Return: Pointer to the first node where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step = sqrt(size);
	listint_t *block_start = list, *block_end = list;

	if (list == NULL)
		return (NULL);
	while (block_end->index < size - 1 && block_end->n < value)
	{
		for (i = 0; i < step && block_end->next != NULL; i++)
			block_end = block_end->next;
		printf("Value checked at index [%lu] = [%d]\n", block_end->index
				, block_end->n);
		if (block_end->n >= value)
			break;
		block_start = block_end;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", block_start->index
			, block_end->index);
	while (block_start != block_end->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", block_start->index
				, block_start->n);
		if (block_start->n == value)
			return (block_start);
		block_start = block_start->next;
	}
	return (NULL);
}
