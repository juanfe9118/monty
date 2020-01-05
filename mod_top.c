#include "monty.h"

/**
 * mod_top - computes the rest of the division of the second top element
 * of the stack by the top element of the stack and removes the top
 * element to leave the result in a new top
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void mod_top(stack_t **stack, unsigned int line_number)
{
	stack_t *mod = *stack;
	size_t len = stack_len(*stack);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod = mod->next;
	if ((*stack)->n == 0)
	{
		dprintf(STDERR_FILENO, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	mod->n %= (*stack)->n;
	pop_stack(stack, line_number);
}
