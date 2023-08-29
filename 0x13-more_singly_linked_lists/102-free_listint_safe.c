#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t linked list safely.
 * @h: A double pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t nodes = 0;
listint_t *current = *h;
listint_t *temp;

while (current != NULL)
{
nodes++;
if (current->next >= current)
{
temp = current->next;
free(current);
break;
}
temp = current;
current = current->next;
free(temp);
}

*h = NULL;

return (nodes);
}
