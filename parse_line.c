#include "monty.h"

int node_int = 0;

/**
 * parse_line - parses the line taken from b_code into instructions
 * @line: line taken from b_code
 * @line_ctr: line counter
 * @top: top of the stack
 * Return: the integer parsed, 0 if no integer is parsed
 */
void parse_line(char *line, unsigned int line_ctr, stack_t **top)
{
	char *tok = NULL, *tok2 = NULL;
	void (*ins_func)(stack_t **, unsigned int);

	tok = strtok(line, " \t\n");
	if (tok == NULL)
		return;
	if (strcmp(tok, "push") == 0)
	{
		tok2 = strtok(NULL, " \t\n");
		if (((tok2[0] < '0' || tok2[0] > '9') && tok2[0] != '-') || tok2 == NULL)
		{
			dprintf(2, "L%u: usage: push integer\n", line_ctr);
			exit(EXIT_FAILURE);
		}
		node_int = atoi(tok2);
	}
	ins_func = get_inst(tok);
	if (ins_func == NULL)
	{
		dprintf(2, "L%u: unknown instruction %s\n", line_ctr, tok);
		exit(EXIT_FAILURE);
	}
	ins_func(top, line_ctr);
}
