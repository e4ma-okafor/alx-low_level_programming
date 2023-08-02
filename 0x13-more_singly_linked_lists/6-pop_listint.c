#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: head of list
 * Return: list head node data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *new;

	if (*head == NULL)
		return (0);

	new = *head;

	hnode = new->n;

	h = new->next;

	free(new);

	*head = h;

	return (hnode);
}
