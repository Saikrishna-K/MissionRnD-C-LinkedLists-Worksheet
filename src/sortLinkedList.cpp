/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {

	if (head == NULL) return NULL;

	struct node *prev, *small, *temp = head, *temp2;

	prev = head;
	//Sorting the linkedlist using bubble sort
	while (temp)
	{

		small = temp;
		temp2 = temp->next;

		while (temp2)
		{
			if (small->num > temp2->num)
			{
				small = temp2;
			}

			temp2 = temp2->next;
		}

		int n = temp->num;
		temp->num = small->num;
		small->num = n;
		temp = temp->next;
	}


	return head;


}