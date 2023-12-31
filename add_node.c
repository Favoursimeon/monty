#include "monty.h"
/**
 * add_node - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void add_node(top_stack **head, int n)
{

	top_stack *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(top_stack));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
