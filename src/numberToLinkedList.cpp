/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/



#include<stdio.h>
#include<stdlib.h>


struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	struct node *current, *temp, *tail = (struct node *)calloc(1, sizeof(struct node));

	if (N < 0) N *= -1;
	tail->num = 0;
	tail->next = NULL;

	int rem;

	rem = N % 10;
	N /= 10;

	tail->num = rem;
	current = tail;

	while (N)// continues untill there is no number to insert.
	{
		rem = N % 10;// retreving remainder and inserting it into a node.
		N /= 10;
		temp = (struct node *)calloc(1, sizeof(struct node));
		temp->num = rem;
		temp->next = current;
		current = temp;



	}

	return current;
}

