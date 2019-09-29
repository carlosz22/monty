#include "monty.h"

/**
 * div_opc - Divide the top two elements of the stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void div_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int lastN = 0, prevN = 0, div = 0;
	int count = 0;

	tmp = *stack;

	while (tmp != NULL  && tmp->next != NULL)
	{
		count++;
		tmp = tmp->next;
	};

	if (count < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	lastN = tmp->n;
	prevN = tmp->prev->n;

	if (lastN == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	div = prevN / lastN;
	tmp->prev->n = div;
	tmp->prev->next = NULL;
	free(tmp);
}
