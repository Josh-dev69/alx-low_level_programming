#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function that add new node to the end of a linked list
 * @head: pointer to structure
 * @str: String parameter
 * Return: the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t length = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	
	while (str[length])
		length++;
	new_node->len = length;
	
	if (new_node->str == NULL && new_node->len == 0)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
