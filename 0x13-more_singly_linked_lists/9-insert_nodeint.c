#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * insert_nodeint_at_index - Inserts a new node to a listint_t list
 *                                at a given position.
 *
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * @idx: The index of the listint_t list where the new node should be
 *                    added - index starts at 0.
 *
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *           Otherwise - the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int j;

	/* Check if head is null or index is out of bounds */
	if (head == NULL || idx > listint_len(*head))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			return (NULL);

		new_node->n = n;

		/* Insert at head */
		if (idx == 0)

		{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
		}

		/* Insert at other positions */
		current_node = *head;
		for (j = 0; j < idx - 1, j++;)
		current_node = current_node->next;

		new_node->next = current_node->next;
		current_node->next = new_node;

		return (new_node);
}

/**
 * listint_len - Returns the number of elements in a linted listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 *
 */
size_t listint_len(count listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++
		h = h->next;
	}

	return (count);
}
