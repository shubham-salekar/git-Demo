#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id ;
	float ht;
	struct student *next;

}stud;
void main(){

	stud *head = 0;

	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode -> id = 1;
	newnode->ht = 5.4;
	newnode->next = NULL;

	head = newnode;
		
	newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 2;
	newnode->ht = 6.0;
	newnode->next = NULL;

	head->next = newnode;

	newnode = (stud*)malloc(sizeof(stud));
	newnode->id = 3;
	newnode->ht = 6.5;
	newnode->next = NULL;

	head->next->next = newnode;

	stud *temp = head;

	while(temp != NULL){
	
		printf("%d = ",temp->id);
		printf("%f | ",temp->ht);

		temp = temp->next;
	}

}
