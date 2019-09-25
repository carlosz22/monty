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
	stack_t *stack;
	size_t size = 100;
	unsigned int line_number = 0;
	char **tokens = NULL;
	FILE *fp;
	int i = 0;

	fp = fopen(file, "r");
	if (fp < 0)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	};

	while (getline(&buffer, &size, fp) != -1)
	{
		i = 0;
		line_number++;
		printf("%s\n", buffer);
		tokens = tokenizer(buffer);
		/* free(buffer); */
		while (tokens[i])
		{
			printf("%s\n", tokens[i]);
			i++;
		};
		/**execute(tokens, line, &stack);**/
	}
	free(buffer);
	fclose(fp);
}
