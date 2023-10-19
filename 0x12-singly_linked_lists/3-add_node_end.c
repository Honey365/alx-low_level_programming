#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new person to the end of the line.
 * @h: double pointer to the list_t list.
 * @str: the name of the new person (a string).
 *
 * Return: Address of the new person, or NULL if it failed.
 */
list_t *add_node_end(list_t **h, const char *str)
{
	list_t *new;
	list_t *temp = *h;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*h == NULL)
	{
		*h = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
