#include "monty.h"
/**
 * first_queu - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void first_queu(top_stack **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * add_queue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void add_queue(top_stack **head, int n)
{
	top_stack *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(top_stack));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
