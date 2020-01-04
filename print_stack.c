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
	stack_t *head = *stack;

	(void) line_number;
	if (head == NULL)
		return;
	for (i = 0; head != NULL; i++)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}
