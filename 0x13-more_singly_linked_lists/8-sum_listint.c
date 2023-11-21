#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *  * sum_listint - Calculates the sum of all the elements in a listint_t list.
 *   * @head: Pointer to the head of the list.
 *    * Return: The sum of all the elements in the list.
 */
int sum_listint(listint_t *head)
{
	listint_t *current;
	int data = 0;

	current = head;

	while (current != NULL)
	{
		data += current->n;
		current = current->next;
	}
	return (data);
}
