#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 *	linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: returns the head node data (n),
 *	otherwise 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}
