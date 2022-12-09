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

	while( temp != NULL){
		
		sum = sum + temp->data;	
		
		temp = temp->next;
	}
	printf("%d is sum of integer data in nodes\n",sum);

}
void main(){

	addnode();
	addnode();
	addnode();

	printll();
}

























