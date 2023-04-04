#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * @index: The index of the node to locate - indices start at 0.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
			return (head);

		head = head->next;
		current_index++;
	}

	return (NULL);
}
