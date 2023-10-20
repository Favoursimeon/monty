#include "monty.h"
/**
  *first_subtraction- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void first_subtraction(top_stack **head, unsigned int counter)
{
	top_stack *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't subtract, stack is too short\n", counter);
		fclose(bus.file);
		free(bus.contains_);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
