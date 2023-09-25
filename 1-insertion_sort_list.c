#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in order
 * @list: A pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
listint_t *current, *prev_node, *next_node;

if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;
current = (*list)->next;
while (current != NULL)
{
next_node = current->next;

while (current->prev != NULL && current->n < current->prev->n)
{
prev_node = current->prev;
current->prev = prev_node->prev;
prev_node->next = current->next;

if (current->next != NULL)
current->next->prev = prev_node;
current->next = prev_node;
prev_node->prev = current;

if (current->prev != NULL)
current->prev->next = current;
else
*list = current;
print_list(*list);
}
current = next_node;
}
}
