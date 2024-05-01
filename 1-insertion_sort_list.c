#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @n1: A pointer to the first node to swap.
 * @n2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *insertion_point, *nextNode;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current_node = (*list)->next; current_node != NULL; current_node = nextNode)
	{
		nextNode = current_node->next;
		insertion_point = current_node->prev;
		while (insertion_point != NULL && current_node->n < insertion_point->n)
		{
			swap_nodes(list, &insertion_point, current_node);
			print_list((const listint_t *)*list);
		}
	}
}
