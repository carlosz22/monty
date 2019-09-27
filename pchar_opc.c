#include "monty.h"

/**
 * pchar_opc - Prints the ascii character at top of the stack
 * @stack: Doubly linked list
 * @line_number: Number's line
 * Return: Nothing
 */

void pchar_opc(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	tmp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pcharint, stack empty\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	};

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	};

	if (tmp->n >= 0 && tmp->n <= 255)
	{
		putchar(tmp->n);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_all(1);
		exit(EXIT_FAILURE);
	}
}
