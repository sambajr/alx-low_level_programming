#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *  * add_node_end - Adds a new node at the end of a list_t list.
 *   * @head: Pointer to a pointer to the head of the list.
 *    * @str: String to be duplicated and stored in the new node.
 *     *
 *      * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *current;



	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(str);

	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
