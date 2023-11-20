#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *  * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *   * @head: Pointer to a pointer to the head of the list.
 *    * @n: Integer value to be added to the new node.
 *     * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pint = malloc(sizeof(listint_t));

	if (pint == NULL)
	{
		return (NULL);
	}

	pint->n = n;
	pint->next = *head;
	*head = pint;

	return (pint);
}





