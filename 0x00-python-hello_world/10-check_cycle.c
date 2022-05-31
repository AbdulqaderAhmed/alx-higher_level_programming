#include "lists.h"

/**
 * We have two pointers, one moving at twice the speed of the other. If they ever meet, then there is a
 * cycle
 * 
 * @param list the list to check
 * 
 * @return The address of the node where the cycle begins.
 */
 
int check_cycle(listint_t *list)
{
	listint_t *tortoise;
	listint_t *hare;

	if (list == NULL)
		return (0);
	tortoise = list;
	hare = list;
	while (hare->next != NULL && hare->next->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			tortoise = list;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (1);
		}
	}
	return (0);
}
