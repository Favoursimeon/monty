#include "monty.h"
/**
 * first_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void first_pop(top_stack **head, unsigned int counter)
{
	top_stack *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.contains_);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
