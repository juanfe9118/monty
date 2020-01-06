#include "monty.h"

/**
 * pchar_top - prints the char at the top of the stack, followed by a new line
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void pchar_top(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n < 0 || (*stack)->n > 127)
	{
		dprintf(STDERR_FILENO, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*stack)->n);
}
