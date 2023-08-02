#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * sets the head to null
 * @head: head of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while ((temp = new) != NULL)
		{
			new = new->next;
			free(temp);
		}
		*head = NULL;
	}
}
