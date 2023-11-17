#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>
/**
 *  * add_node - Adds a new node at the beginning of a list_t list.
 *   * @head: Pointer to a pointer to the head of the list.
 *    * @str: String to be duplicated and stored in the new node.
 *
 *Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}

