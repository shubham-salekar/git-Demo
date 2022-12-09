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

	while( temp != NULL){

		int count = 0;
		
		for(int i=2 ; i<=(temp->data)/2 ; i++){
		
			if((temp->data)% i == 0){
			
				count++;
			}
		}
		if(count == 0){
		
			printf("%d is prime number\n",temp->data);
		}else{
		
			printf("%d is not prime number\n",temp->data);
		}
		
		temp = temp->next;
	}

}
void main(){

	addnode();
	addnode();
	addnode();

	printll();
}

























