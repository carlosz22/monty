#include "monty.h"

/**
 * interpreter - inteprete and process each line of a Monty byte code
 * @file: Path to the file
 *
 * Return: Nothing
 */

void interpreter(char *file)
{
	char *buffer = NULL;
	stack_t *stack = NULL;
	size_t size = 100;
	unsigned int line_number = 0;
	char **tokens = NULL;
	FILE *fp;

	fp = fopen(file, "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	};

	while (getline(&buffer, &size, fp) != -1)
	{
		line_number++;
		tokens = tokenizer(buffer);
		execute(fp, buffer, tokens, &stack, line_number);
	}
	free(buffer);
	fclose(fp);
}
