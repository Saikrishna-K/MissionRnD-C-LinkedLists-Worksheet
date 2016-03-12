#include <stdio.h>
#include <malloc.h>  /*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/



struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int one = 0, two = 0;
	struct node *current = head, *temp, *zerohead = head;

	while (current)
	{

		int num = current->data;
		if (current->data == 0)//      if num is equal to zero than append it to linked list
		{
			zerohead->data = 0;
			zerohead = zerohead->next;
		}

		else if (current->data == 1)// if num is equal to 1 increase the "one" count value
		{
			one++;


		}
		else if (current->data == 2)// if num is equal to 2 increase the "two" count value
		{

			two++;
		}
		current = current->next;
	}
	while (one--)// appending one's to the linked list
	{
		zerohead->data = 1;
		zerohead = zerohead->next;
	}
	while (two--)//appending two's to the linked list
	{
		zerohead->data = 2;
		zerohead = zerohead->next;

	}
}