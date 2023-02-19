#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: The list
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *aux;

	temp = (*list)->next;

	while (temp != NULL)
	{
		aux = temp;
		while ((aux->prev != NULL) && (aux->n < aux->prev->n))
		{
			if (aux->prev == *list)
				*list = aux;
			swapList(aux->prev, aux);

			print_list(*list);
		}

		temp = temp->next;
	}
}

/**
 * swapList - swaps two elements of a list
 *
 * @node1: first elements
 * @node2:  second element
 *
 * Return: void
 */
void swapList(listint_t *node1, listint_t *node2)
{
	listint_t *temp;

	temp = node1->next;

	node1->next = node2->next;
	node2->next = temp;

	if (node1->next != NULL)
		node1->next->prev = node1;
	if (node2->next != NULL)
		node2->next->prev = node2;

	temp = node1->prev;
	node1->prev = node2->prev;
	node2->prev = temp;
	if (node1->prev != NULL)
		node1->prev->next = node1;
	if (node2->prev != NULL)
		node2->prev->next = node2;
}
