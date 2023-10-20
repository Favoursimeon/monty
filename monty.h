#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO ALX project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} top_stack;
/**
 * struct bus_s - variables -args, file, line contains_
 * @arg: value
 * @file: pointer to monty file
 * @contains_: line contains_
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *contains_;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO ALX project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(top_stack **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int prev_size, unsigned int rec_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *contains_);
void first_push(top_stack **head, unsigned int number);
void first_pall(top_stack **head, unsigned int number);
void top_print(top_stack **head, unsigned int number);
int executer(char *contains_, top_stack **head, unsigned int counter, FILE *file);
void free_stack(top_stack *head);
void first_pop(top_stack **head, unsigned int counter);
void first_exchange(top_stack **head, unsigned int counter);
void first_addition(top_stack **head, unsigned int counter);
void first_nor(top_stack **head, unsigned int counter);
void first_subtraction(top_stack **head, unsigned int counter);
void first_division(top_stack **head, unsigned int counter);
void first_multiply(top_stack **head, unsigned int counter);
void first_modul(top_stack **head, unsigned int counter);
void first_charprint(top_stack **head, unsigned int counter);
void first_strprint(top_stack **head, unsigned int counter);
void first_leftrot(top_stack **head, unsigned int counter);
void first_rightrot(top_stack **head, __attribute__((unused)) unsigned int counter);
void add_node(top_stack **head, int n);
void add_queue(top_stack **head, int n);
void first_queu(top_stack **head, unsigned int counter);
void first_stack(top_stack **head, unsigned int counter);
#endif
