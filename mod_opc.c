#include "monty.h"

/**
 * mod_opc - Do the module of the top two elements of the stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void mod_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int lastN = 0, prevN = 0, mod = 0;
	int count = 0;

	tmp = *stack;

	while (tmp->next)
	{
		count++;
		tmp = tmp->next;
	};

	lastN = tmp->n;
	prevN = tmp->prev->n;

	if (count < 1)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	if (lastN == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	mod = prevN / lastN;
	tmp->prev->n = mod;
	tmp->prev->next = NULL;
	free(tmp);
}
