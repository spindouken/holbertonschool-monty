#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of dlistint_t list
 * @head: head
 * @n: integer variable
 * Return: the address of the new element, or NULL on failure
 */

stack_t *push(stack_t **head, const int n)
{
	stack_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	tmp->prev = NULL;
	if (*head != NULL)
		(*head)->prev = tmp;
	*head = tmp;
	return (tmp);
}
