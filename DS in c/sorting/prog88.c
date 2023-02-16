
//merge sort in Linklist

#include<stdio.h>
#include<stdlib.h>

typedef struct demo{

	int data;
	struct demo *next;
}demo;

demo *head = NULL;

demo* createnode(){

	demo *newnode = (demo*)malloc(sizeof(demo));
	
	printf("Enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;
	return newnode;
}
void addnode(){

	demo* newnode = createnode();

	if(head==NULL)
		head = newnode;
	else{
	
		demo *temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		
		temp->next = newnode;
	}
}
int sortdemo(int size){

	demo* temp1 = head;
	demo* temp2 = head->next;

	int count = 0;
	while(temp1->next != NULL){
	
		if(temp1->data > temp2->data){
		
		        temp1->data = temp1->data + temp2->data;
			temp2->data = temp1->data - temp2->data;
			temp1->data = temp1->data - temp2->data;
		}
		temp1 = temp1->next;
	//	temp2 = temp2->next;

		if(temp1->next == NULL){
			count++;
			if(count == size-1)
				break;

			temp1 = head;
			temp2 = head;
		}
		temp2 = temp2->next;
	}
}
void printll(){


	demo *temp = head;
	while(temp != NULL){
	
		printf("%d ",temp->data);
		temp = temp->next;

	}
	printf("\n");
}
void main(){

	int size;
	printf("how many nodes do u want to add\n");
	scanf("%d",&size);

	for(int i=0 ; i<size ; i++){
		addnode();
	}
	printf("ll before sorting\n");
	printll();
	
	printf("ll after sorting\n");
	sortdemo(size);
	printll();
}

