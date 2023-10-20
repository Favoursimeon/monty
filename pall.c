#include "monty.h"
/**
 * first_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void first_pall(top_stack **head, unsigned int counter)
{
	top_stack *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
