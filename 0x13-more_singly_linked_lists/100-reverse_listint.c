#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return (*head);
}
