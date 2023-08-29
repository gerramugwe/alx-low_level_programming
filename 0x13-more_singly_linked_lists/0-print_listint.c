#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t k;

	for ( k = 0; h; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}
