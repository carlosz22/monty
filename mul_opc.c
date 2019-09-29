#include "monty.h"

/**
 * mul_opc - Multiply the top two elements of the stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void mul_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	int lastN = 0, prevN = 0, mul = 0;
	int count = 0;

	tmp = *stack;

	while (tmp && tmp->next)
	{
		count++;
		tmp = tmp->next;
	};

	if (count < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}

	lastN = tmp->n;
	prevN = tmp->prev->n;

	mul = lastN * prevN;
	tmp->prev->n = mul;
	tmp->prev->next = NULL;
	free(tmp);
}
