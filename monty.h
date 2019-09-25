#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

/* Structures */

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Global variables */
extern int push_int;


/* Main functions */

void interpreter(char *file);
int execute(char **tokens, stack_t **stack, unsigned int line_number);
int free_everything(char **obj);
char **_strtok(char *buff);
char **tokenizer(char *value);
int do_Functions(char *token, int int_token, stack_t **stack, unsigned int line_number);

/* Opcode functions */
void push_opc(stack_t **stack, int value,  unsigned int line_number);
void pall_opc(stack_t **stack, unsigned int line_number);
void pint_opc(stack_t **stack, unsigned int line_number);
void pop_opc(stack_t **stack, unsigned int line_number);
void swap_opc(stack_t **stack, unsigned int line_number);
void add_opc(stack_t **stack, unsigned int line_number);
void sub_opc(stack_t **stack, unsigned int line_number);
void div_opc(stack_t **stack, unsigned int line_number);
void mul_opc(stack_t **stack, unsigned int line_number);
void mod_opc(stack_t **stack, unsigned int line_number);
void pchar_opc(stack_t **stack, unsigned int line_number);
void pstr_opc(stack_t **stack, unsigned int line_number);
void rotl_opc(stack_t **stack, unsigned int line_number);
void rotr_opc(stack_t **stack, unsigned int line_number);
void nop_opc(stack_t **stack, unsigned int line_number);

#endif /* _MONTY_H_ */
