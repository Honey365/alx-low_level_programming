#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list.
 * @h: pointer to the start of the list.
 *
 * This function frees the memory occupied by a linked list and its data.
 */
void free_list(list_t *h)
{
	list_t *temp;

	while (h)
	{
		temp = h->next;
		free(h->str);
		free(h);
		h = temp;
	}
}
