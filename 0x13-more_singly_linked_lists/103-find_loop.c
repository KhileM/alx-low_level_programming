#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise = head, *hare = head;

    while (tortoise && hare && hare->next)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            tortoise = head;
            while (tortoise && hare)
            {
                if (tortoise == hare)
                    return (tortoise);

                tortoise = tortoise->next;
                hare = hare->next;
            }
        }
    }

    return (NULL);
}
