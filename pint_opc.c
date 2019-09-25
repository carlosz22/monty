#include "monty.h"

/**
 * pint_opc - Prints the value at top of the stack
 * @stack: Doubly linked list
 * @line_number: Number's line
 * Return: Nothing
 */

void pint_opc(stack_t **stack, unsigned int line_number)
{
	stack_t tmp;

	tmp = *stack;

	while (tmp != NULL)
	{
		tmp = tmp->next;
	};
	
	tmp = tmp->prev;
	printf("%i\n", tmp->n);
}
