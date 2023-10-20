#include "monty.h"
/**
 * first_charprint - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void first_charprint(top_stack **head, unsigned int counter)
{
	top_stack *h;

	h = *head;
	if (!h)
	{
		fprintf(stderr, "L%d: can't print characters, stack empty\n", counter);
		fclose(bus.file);
		free(bus.contains_);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't print characters, value out of range\n", counter);
		fclose(bus.file);
		free(bus.contains_);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
