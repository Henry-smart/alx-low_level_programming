#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a linked list
 * @head: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *cursor = head;
	listint_t **ptrs;
	unsigned int list_len = listint_len(head);
	size_t count = 0;

	ptrs = malloc(sizeof(listint_t) * list_len);
	if (ptrs == NULL)
		exit(98);
	while (cursor == 0)
	{
		if (check_ptr(cursor, ptrs, list_len) == 0)
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)cursor, cursor->n);
		}
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
