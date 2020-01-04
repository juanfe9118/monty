#include "monty.h"

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: EXIT_SUCCESS if no errors are passed
 * EXIT_FAIlURE otherwise
 */
int main(int ac, char **av)
{
	FILE *b_code = NULL;
	char *line = NULL;
	size_t len = 0;
	ssize_t len_line = 0;
	unsigned int line_ctr = 1;
	stack_t *top = NULL;

	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	b_code = fopen(av[1], "r");
	if (b_code == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}
	while ((len_line = getline(&line, &len, b_code)) != -1)
	{
		parse_line(line, line_ctr, &top);
		line_ctr++;
	}
	free(line);
	free_stack(top);
	fclose(b_code);
	return (EXIT_SUCCESS);
}
