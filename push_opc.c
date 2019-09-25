#include "monty.h"

/**
 * push_opc - Push an element into a linked list
 * @stack: Doubly linked list
 * @val: Value to be pushed into a linked list
 * @line_number: Number of line
 */

void push_opc(stack_t **stack, int value, unsigned int line_number)
{
	stack_t *new;
	stack_t *tmp = *stack;

	new = (stack_t *) malloc(sizeof(stack_t));
	if (new == NULL)
	{
		print("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n;

	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*stack = new;
	}

	while (tmp->next != NULL)
		tmp = tmp->next;

	new->prev = tmp;
	new->next = NULL;
	tmp->next = new;
}