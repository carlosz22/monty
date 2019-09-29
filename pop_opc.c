#include "monty.h"

/**
 * pop_opc - Pop an element into a linked list
 * @stack: Doubly linked list
 * @line_number: Number of line
 * Return: Nothing
 */

void pop_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);

	}

	while (tmp != NULL)
	{
		if (tmp->next == NULL)
		{
			if (tmp->prev == NULL)
			{
				*stack = NULL;
			}
			else
			{
				(tmp->prev)->next = NULL;
			};
			free(tmp);
		}
		tmp = tmp->next;
	}
}
