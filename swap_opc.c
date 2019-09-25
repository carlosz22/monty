#include "monty.h"

/**
 * swap_opc - Swap the two top element of stack
 * @stack: Doubly linked list
 * @line_number: Line's number
 * Return: Nothing
 */

void swap_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1, *tmp2;
	int i = 0, count = 0;

	tmp1 = *stack;
	tmp2 = *stack;

	while (tmp1->next)
	{
		count++;
		tmp1 = tmp1->next;
	};
	while (i < count)
	{
		tmp2 = tmp2->next;
	};
	tmp1->next = tmp1->prev;
	tmp1->prev = tmp2->prev;
	tmp2->prev = tmp2->next;
	tmp2->next = NULL;
}
