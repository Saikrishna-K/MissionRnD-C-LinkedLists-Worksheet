#include<stdlib.h>
/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {

	int i = 1;

	if (head == NULL || K<1) return NULL;
	if (K == 1) { free(head); head = NULL; return head; }//if K==1 returning Null value.

	struct node *current = head;

	while (current)
	{
		if (i == K - 1) // checks the Kth node occurence
		{
			if (current->next != NULL)
			{
				i = 1;
				
				current->next = current->next->next;
				current = current->next;
			}
			else return head;

		}
		else
		{
			printf("%d ", current->num);
			current = current->next;
			i++;
		}




	}
	return  head;


}