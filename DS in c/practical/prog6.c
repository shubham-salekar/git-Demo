// sum of first and last node

#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

	int data;
	struct Demo *next;

}demo;

demo *head = NULL;

void addnode(){

	demo *newnode = malloc(sizeof(demo));

	printf("Enter integer data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	if(head == NULL){
	
		head = newnode;
	}else{
	
		demo *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printll(){

	demo *temp = head;

	int sum = 0;

	sum = sum + temp->data;	

	while( temp->next != NULL){
	
		temp = temp->next;
	}

	sum = sum + temp->data;	
	printf("%d is sum of integer data of first and last nodes\n",sum);

}
void main(){

	addnode();
	addnode();
	addnode();

	printll();
}

























