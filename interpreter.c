#include "monty.h"

/**
 * interpreter - doubly linked list representation of a stack (or queue)
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0
 */

void interpreter(char *file)
{
	char *buffer = NULL;
	stack_t *stack;
	size_t size;
	unsigned int line_number = 0;
	char **tokens = NULL;
	FILE *fp;

	fp = fopen(file, R_ONLY);
	if (fp < 0)
	{
		printf("Error");
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &size, fp) != 1)
	{
		line_number++;
		tokens = tokenizer(buffer);
		free(buffer);
		execute(tokens, line, &stack);
	}
	fclose(fp);
}
