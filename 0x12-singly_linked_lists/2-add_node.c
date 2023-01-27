#include "lists.h"
#include <string.h>

/**
 * add_node - Function that add new node to the beginning of a linked list
 * @head: pointer to structure
 * @str: String parameter
 * Return: the address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	while (str[length] != '\0')
		length++;
	new_node->len = length;
	if (new_node->str == NULL && new_node->len == 0)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
