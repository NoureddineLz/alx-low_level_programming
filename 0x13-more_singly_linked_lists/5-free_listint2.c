#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current = *head;
listint_t *next_node;

while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}

*head = NULL;
}
