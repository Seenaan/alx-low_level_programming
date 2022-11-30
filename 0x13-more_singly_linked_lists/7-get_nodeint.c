#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}