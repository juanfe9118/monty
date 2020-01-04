#include "monty.h"

/**
 * pop_stack - deletes the first element of the stack
 * @stack: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (*stack == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	head = head->next;
	head->prev = NULL;
	free(*stack);
	*stack = head;
}
