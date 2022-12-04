
// way2 : Wrong

#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id;
	float ht;
	struct student *next;

}stud;
void addnode(stud *head){

	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode -> id=1;
	newnode->ht = 3.5;
	newnode->next = 0;

	head = newnode;		//here stackframe of addnode is gone when the funck in popped 
				//therfore there is no reffrence to head hence either return the head or declare the hrad globally
}
void printll(stud *head){

	stud *temp = head;

	while( temp!=NULL ){
	
		printf("%d = ",temp->id);
		printf("%f | ",temp->ht);

		temp = temp->next;
	}

}
void main(){

	stud *head = NULL;

	addnode(head);
	printll(head);
}


