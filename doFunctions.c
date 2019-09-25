#include "monty.h"

/**
 * do_Functions - Find the functions of the opcodes to execute
 * @token: Opcode name
 * @int_token: Integer to push
 * @stack: Doubly linked list
 * @line_number: Number of line
 */

void do_Functions(char *token, unsigned int int_token, char **stack, unsigned int line_number)
{
	instruction_t opcodes_Fun[] = {
	{"pall", pall_opc}, {"pint", pint_opc},
	{"pop", pop_opc}, {"swap", swap_opc},
	{"odd", odd_opc}, {"nop", nop_opc},
	{NULL, NULL}
	};

	if (strcmp(token, "push"))
	{
		pint_opc(stack, int_token);
	};

	for (opc = 0; opcodes_Fun[opc].opcode != NULL; opc++)
	{
		if (strcmp(opcodes_Fun[opc].opcode, token) == 0)
		{
			opcodes_Fun[opc].f(stack, line_number);
		};
	}

	if (opcodes_Fun[opc].opcode == NULL)
	{
		print("Error");
		exit(EXIT_FAILURE);
	};
}
