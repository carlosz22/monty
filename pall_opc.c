#include "monty.h"

/**
 * pall_opc - Print all the data from the stack
 * @stack: Doubly linked list
 * @line_number: Number of line
 * Return: Nothing
 */

void pall_opc(stack_t **stack, unsigned int line_number)
{
	stack_t tmp;

	tmp = *stack;

	while (tmp != NULL)
	{
		tmp = tmp->next;
	};
	tmp = tmp->prev;
	while (tmp != NULL)
	{
		printf("%i\n", tmp->n);
		tmp = tmp->prev;
	};
}
