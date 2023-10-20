#include "monty.h"
/**
* executer - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @contains_: line contains_
* Return: no return
*/
int executer(char *contains_, top_stack **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", first_push}, {"pall", first_pall}, {"pint", top_print},
				{"pop", first_pop},
				{"swap", first_exchange},
				{"add", first_addition},
				{"nor", first_nor},
				{"subtract", first_subtraction},
				{"divide", first_division},
				{"multiply", first_multiply},
				{"mod", first_modul},
				{"pchar", first_charprint},
				{"pstr", first_strprint},
				{"rotl", first_leftrot},
				{"rotr", first_rightrot},
				{"queue", first_queu},
				{"stack", first_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(contains_, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(contains_);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
