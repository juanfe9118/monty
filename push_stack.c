#include "monty.h"

/**
 * push_stack - pushes an int to the top of the stack
 * @head: the stack as a doubly linked list
 * @line_number: the line number
 * Return: nothing
 */
void push_stack(stack_t **head, unsigned int line_number)
{
	stack_t *new;

	(void) line_number;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new->n = node_int;
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
	}
}
