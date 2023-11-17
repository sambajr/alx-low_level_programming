#include <stdlib.h>
#include "lists.h"

/**
 *  * free_list - Frees a list_t list.
 *   * @head: Pointer to the head of the list.
 *    *
 *Description: This function frees the memory allocated for each node in the
 *      * list, including the duplicated strings.
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
