#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list_new;

	list_new = *head;
	list_new = malloc(sizeof(listint_t));
	if (list_new == NULL)
		return (NULL);
	list_new->n = n;
	list_new->next = *head;
	*head = list_new;
	return (*head);

}
