
// reverse link list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node *prev;
	int data;
	struct node *next;
}node;

node *head = NULL;

node* createnode(){

	node* newnode = (node*)malloc(sizeof(node));

	newnode->prev = 0;

	printf("enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = 0;

	return newnode;
}
void addnode(){

	node *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		node *temp = head;

		while(temp->next != 0){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
	}
}
void printll(){

	if(head == NULL){
	
		printf("LL is empty\n");
	}else{
	
		node *temp = head;

		while(temp->next != NULL){
		
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
			
		printf("|%d|\n",temp->data);
		

	}
}
int rev1_LL(){

	if(head == 0){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		node *temp = head;

		while(temp->next != 0){
		
			temp = temp->next;
		}
		while(temp->prev != 0){
		
			printf("|%d|->",temp->data);

			temp = temp->prev;
		}
		printf("|%d|\n",temp->data);
	}
	return 0;

}
int rev2_LL(){

	if(head == NULL){
	
		printf("empty LL\n");
		return -1;
	}else{
	
		node* temp1 = head;
		node* temp2 = head;

		int count = 1;
		while(temp2 ->next != 0){
		
			count++;
			temp2 = temp2->next;
		}
		count = count/2;

		while(count){
		
			int x = temp1->data;
			temp1->data = temp2->data;
			temp2->data = x;

			temp1 = temp1->next;
			temp2 = temp2->prev;

			count--;
		}

	}
	printll();

	return 0;

}
void main(){

	int n;
	printf("enter node count\n");
	scanf("%d",&n);

	if(n<=0){
	
		printf("invalid input\n");
	}else{

		for (int i = 1; i<=n ; i++){
	
			addnode();
		}
		printll();
	}

	printf("1.reverse way 1(print rev)\n");
	printf("2.reverse way 2(actual rev)\n");

	int ch;
	printf("enter choice\n");
	scanf("%d",&ch);
	
	switch (ch){
	
		case 1:
			rev1_LL();
			break;
		case 2:
			 rev2_LL();
			 break;
		default :
			printf("invalid input\n");
			break;

	}
}
