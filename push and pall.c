#include "lists.h"

/**
 * monty_push - add to top of stack
 * @stack: stack
 * @n: integer variable
 * Return: the address of the new element, or NULL on failure
 */

void monty_push(stack_t **stack, unsinged int line_number)
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
