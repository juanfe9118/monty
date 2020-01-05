#include "monty.h"

/**
 * add_top - adds the first two elements in a stack
 * and removes the top element to leave the result
 * in a new top
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void add_top(stack_t **stack, unsigned int line_number)
{
	stack_t *sum = *stack;
	size_t len = stack_len(*stack);

	if (len < 2)
	{
		dprintf(STDERR_FILENO, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = sum->next;
	sum->n += (*stack)->n;
	pop_stack(stack, line_number);
}
