#include "monty.h"

/**
 * pstr_opc - Print the ascii characters from the stack
 * @stack: Doubly linked list
 * @line_number: Number of line
 * Return: Nothing
 */

void pstr_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

	tmp = *stack;

	if (tmp == NULL)
	{
		printf("\n");
		return;
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	while (tmp != NULL)
	{
		if (tmp->n > 0 && tmp->n <= 255)
			putchar(tmp->n);
		else
			break;
		tmp = tmp->prev;
	}
	putchar('\n');
}
