#include "monty.h"
/**
  *first_rightrot- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void first_rightrot(top_stack **head, __attribute__((unused)) unsigned int counter)
{
	top_stack *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
