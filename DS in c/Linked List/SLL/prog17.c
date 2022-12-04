
// way2 : right2

#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id;
	float ht;
	struct student *next;

}stud;
stud* addnode(stud *head){

	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode -> id=1;
	newnode->ht = 3.5;
	newnode->next = 0;

	head = newnode;		
	
	return head;

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

	head = addnode(head);
	printll(head);
}


