// inplace reverse dll
#include<stdio.h>
#include<stdlib.h>


typedef struct node{

	struct node *prev;
	int data;
	struct node *next;
}node;

node *head = NULL;

node* createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	newnode->prev = NULL;

	printf("Enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}
void addnode(){

	node *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		node *temp = head;
		while(temp->next !=0){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode ->prev = temp;
	}
}
void printll(){

	node *temp = head;
	
	while(temp!=0){
	
		if(head ==0){
		
			printf("| %d |",temp->data);
		}else{
		
			printf("| %d |->",temp->data);
		}
	
		temp=temp->next;
	}

}
void inplaceR(){

	node *temp = NULL;

	while(head != NULL){

		temp = head->prev;
		head->prev = head->next;
	    head->next = temp;
		head = head->prev;
    
	}
	head = temp->prev;
}
void main(){

	char choice;

	do{
	
		printf("1.add node\n");
		printf("2.Show total nodes\n");
		printf("3.inplace reverse\n");
		
		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				int n;
				printf("enter node count\n");
				scanf("%d",&n);

				for (int i=1 ; i<=n ; i++){
				
					addnode();
				}
			       }
				break;
			case 2:
				printll();
				break;
			case 3:
				inplaceR();
				break;
			default:
				printf("Wrong choice\n");

		}
		getchar();
		printf("Do you to continue\n");
		scanf("%c",&choice);
	
	}while(choice == 'y' || choice == 'Y' );


}
