#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head;
const listint_t *fast = head;
size_t nodes = 0;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
nodes++;

while (slow != fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
slow = slow->next;
nodes++;
}

printf("-> [%p] %d\n", (void *)slow, slow->n);
return (nodes);
}

printf("[%p] %d\n", (void *)slow, slow->n);
nodes++;
}

return (nodes);
}
