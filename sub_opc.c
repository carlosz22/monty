#include "monty.h"

/**
 * sub_opc - Substract the top two elements of the stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void sub_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int lastN = 0, prevN = 0, sub = 0;
	int count = 0;

	tmp = *stack;

	while (tmp && tmp->next)
	{
		count++;
		tmp = tmp->next;
	};
	if (count < 1)
	{
		fprintf(stderr, "L%i: can't sub, stack too short\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	lastN = tmp->n;
	prevN = tmp->prev->n;
	sub = prevN - lastN;
	tmp->prev->n = sub;
	tmp->prev->next = NULL;
	free(tmp);
}
