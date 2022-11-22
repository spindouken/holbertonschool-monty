#include "monty.h"

int value;

/**
 * add_node - add new node to top of
 * stack_t stack (doubly linked list)
 * @n: integer variable
 * Return: new node
 */
stack_t *add_node(int n)
{
	stack_t *node = NULL;

	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	return (node);
}

/**
 * monty_push - push int to top of stack (doubly linked list)
 * @stack: stack
 * @line_number: line number from read file
 * Return: void
 */

void monty_push(stack_t **stack, unsigned int line_number)
{
	stack_t *node = NULL;
	(void)line_number;

	node = add_node(value);

	node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = node;
	*stack = node;
}

/**
 * monty_pall - print all nodes of stack
 * @stack: stack
 * @n: value variable
 * Return: void
 */

void monty_pall(stack_t **stack, unsigned int n)
{
	stack_t *current = NULL;
	(void)n;

	current = *stack;

	while (current != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", current->n);
		current = current->next;
	}
}
