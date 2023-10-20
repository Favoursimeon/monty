#include "monty.h"
/**
 * top_print - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void top_print(top_stack **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.contains_);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
