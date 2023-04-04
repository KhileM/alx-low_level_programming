#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)  /* Use a guard clause to check for an empty list */
		return (0);

	int data = (*head)->n;  /* Use a temporary variable for readability */
	listint_t *tmp = *head;

	*head = (*head)->next;
	free(tmp);

	return (data);
}
