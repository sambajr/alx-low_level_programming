#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  * insert_nodeint_at_index - Inserts a new node at a given position.
 *   * @head: Pointer to a pointer to the head of the list.
 * @idx:Index of the list wherethe new node should be added. Index starts at 0.
 *     * @n: Integer value to be added to the new node.
 *      * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode =  malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	current = *head;

	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(newnode);
		return (NULL);
	}

	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}

