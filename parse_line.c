#include "monty.h"

int node_int = 0;

/**
 * parse_line - parses the line taken from b_code into instructions
 * @line: line taken from b_code
 * @line_ctr: line counter
 * @top: top of the stack
 * Return: the integer parsed, 0 if no integer is parsed
 */
void parse_line(char *line, unsigned int line_ctr, stack_t **top, FILE *b_code)
{
	char *tok = NULL, *tok2 = NULL;
	void (*ins_func)(stack_t **, unsigned int);
	int i = 0;

	tok = strtok(line, " \t\n");
	if (tok == NULL)
		return;
	if (strcmp(tok, "push") == 0)
	{
		tok2 = strtok(NULL, " \t\n");
		while (tok2[i] != '\0')
		{
			if (((tok2[i] < '0' || tok2[i] > '9') && tok2[0] != '-') || tok2 == NULL)
			{
				dprintf(STDERR_FILENO, "L%u: usage: push integer\n", line_ctr);
				free(line);
				free_stack(*top);
				fclose(b_code);
				exit(EXIT_FAILURE);
			}
			i++;
		}
		node_int = atoi(tok2);
	}
	ins_func = get_inst(tok);
	if (ins_func == NULL)
	{
		dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n", line_ctr, tok);
		free(line);
		free_stack(*top);
		fclose(b_code);
		exit(EXIT_FAILURE);
	}
	ins_func(top, line_ctr);
}
