#include "monty.h"

/**
 * print_stack - prints the stack in order
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void print_stack(stack_t **stack, unsigned int line_number)
{
	int i;

	(void) line_number;
	for (i = 0; *stack != NULL; i++)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}
