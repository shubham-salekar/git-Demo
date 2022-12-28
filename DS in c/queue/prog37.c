// implementing queue using linklist.

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;
}node;

int flag = 0;

node* front = NULL;
node* rear = NULL;

node* createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	if(newnode == NULL){
	
		printf("memory full\n");
		exit(0);
	}
	printf("enter data\n");
	scanf("%d",&newnode->data);

	newnode->next == NULL;

	return newnode;

}
void enque(){

	node *newnode = createnode();
	if(front == NULL){
	
		front = newnode;
		rear = newnode;
	}else{
	
		rear->next = newnode;
		rear = newnode;
	}
}
int dequeue(){

	if(front == NULL){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		int val = front->data;

		if(front->next == NULL){
		
			free(front);
			front = NULL;
			rear = NULL;
		}else{
		
			node *temp = front;
			front = front->next;
			free(temp);
		}
		return val;
	}
}
int frontt(){

	if(front == NULL){
	
		flag = 0;
		return -1;

	}else{
	
		flag = 1;
		int val = front->data;
		return val;
	}
}
int printQ(){

	if(front == NULL){
	
		return -1;
	}else{
	
		node *temp = front;
		while(temp != rear){
		
			printf("%d ",temp->data);
			temp = temp->next;
		}
		printf("%d\n",temp->data);

		return 0;
	}
}
void main(){

	char choice;

	do{
	
		printf("1.enque\n2.dequeue\n3.frontt\n4.printQueue\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:
			       enque();
			       break;
			case 2:{
			       	int ret = dequeue();
				if(flag == 1){
				
					printf("%d is dequeued\n",ret);
				}else{
				
					printf("Q is empty\n");
				}
			       }
			       break;
			case 3:{
			       	int ret = frontt();
				if(flag == 0){
					printf("Q is empty\n");
				}else{
				
					printf("front = %d\n",ret);
				}
			       }
			       break;
			case 4:{
			
			       int ret = printQ();
				if(ret == -1){
					printf("Que is empty\n");
				}
			       }
			       break;
			default:
			       printf("invalid choice\n");
			       break;

		}
		getchar();
		printf("Do u want to continue\n");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');
}
