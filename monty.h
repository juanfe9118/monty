#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

extern int node_int;
void free_stack(stack_t *head);
void parse_line(char *line, unsigned int line_ctr, stack_t **, FILE *);
void (*get_inst(char *tok))(stack_t **, unsigned int);
void push_stack(stack_t **, unsigned int);
void print_stack(stack_t **, unsigned int);
void print_top(stack_t **, unsigned int);
void pop_stack(stack_t **, unsigned int);
void push_error(char *line, unsigned int line_ctr, stack_t **, FILE *);
size_t stack_len(const stack_t *);
void swap_top(stack_t **, unsigned int);
void add_top(stack_t **, unsigned int);
void nop_stack(stack_t **, unsigned int);
void sub_top(stack_t **, unsigned int);
void div_top(stack_t **, unsigned int);
void mul_top(stack_t **, unsigned int);
void mod_top(stack_t **, unsigned int);

#endif /*MONTY_H*/
