#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: The string to be duplicated and added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return NULL;

	if (new == NULL)
		return NULL;

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return NULL;
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		list_t *last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new;
	}

	return (new);
}
