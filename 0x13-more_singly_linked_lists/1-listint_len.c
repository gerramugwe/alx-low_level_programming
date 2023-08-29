#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of a linked list
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
		h = h->next;
	return (num);
}
