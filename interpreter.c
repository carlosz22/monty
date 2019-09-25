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
	size_t size = 100;
	unsigned int line_number = 0;
	char **tokens = NULL;
	FILE *fp;
	int i = 0;

	fp = fopen(file, "r");
	if (fp < 0)
	{
		printf("Error");
		exit(EXIT_FAILURE);
	};
	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &size, fp) != -1)
	{
		line_number++;
		printf("%s", buffer);
		tokens = tokenizer(buffer);
		/*free(buffer);*/
		while (tokens[i])
		{
			printf("%s\n", tokens[i]);
			i++;
		};
		/**execute(tokens, line, &stack);**/
	}
	fclose(fp);
}
