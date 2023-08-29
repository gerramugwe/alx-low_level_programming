#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of the list
 * @head: head of the list
 * @index: which node to stop at
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;
	
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
