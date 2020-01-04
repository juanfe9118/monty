#include "monty.h"

/**
 * print_top - prints the first element of the stack
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void print_top(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
