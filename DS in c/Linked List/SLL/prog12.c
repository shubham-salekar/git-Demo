// Singly link list

#include<stdio.h>
#include<stdlib.h>

struct node{

	int data;
	struct node *next;
};
void main(){

	struct node *head = NULL;

	struct node *newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 10;
	newnode->next = 0;

	head = newnode;

	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 20;
	newnode->next = NULL;

	head->next = newnode;

	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = 30;
	newnode->next = NULL;

	(*(*head).next).next= newnode;

	struct node *temp = head;

	while(temp != 0){
		
		printf("%d ",temp->data);
		temp = temp->next;
	
	}
}
