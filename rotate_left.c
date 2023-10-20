#include "monty.h"
/**
  *first_leftrot- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void first_leftrot(top_stack **head,  __attribute__((unused)) unsigned int counter)
{
	top_stack *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
