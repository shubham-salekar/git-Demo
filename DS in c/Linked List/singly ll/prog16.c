
// way2 : right1

#include<stdio.h>
#include<stdlib.h>

typedef struct student{

	int id;
	float ht;
	struct student *next;

}stud;

  stud *head = NULL;

void addnode(){

	stud *newnode = (stud*)malloc(sizeof(stud));
	newnode -> id=1;
	newnode->ht = 3.5;
	newnode->next = 0;

	head = newnode;

}
void printll(){

	stud *temp = head;

	while( temp!=NULL ){
	
		printf("%d = ",temp->id);
		printf("%f | ",temp->ht);

		temp = temp->next;
	}

}
//stud *head = NULL;
void main(){

	addnode();
	printll();

	addnode();
	printll();
}


