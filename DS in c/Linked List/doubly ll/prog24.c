
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
int countnode(){

	int count = 0;

	if(head == NULL){
	
		printf("LL IS EMPTY\n");
	}else{
		node *temp = head ;
		
		while(temp != NULL){
	
			count++;
			temp=temp->next;
		}
	
	}
	printf("count = %d",count);
	return count;
}
void printll(){

	node *temp = head;
	
	while(temp!=0){
	
		if(head = 0){
		
			printf("| %p |",temp->next);
		}else{
		
			printf("| %p |->",temp->next);
		}
	
		temp=temp->next;
	}

}
void addatfirst(){

	node *newnode = createnode();

	if(head == 0){
	
		head = newnode;
	}else{
		
		newnode->next = head;
		head->prev = newnode;
		head = newnode;

	}
}
void addatposition(int pos){

	int count = countnode();

	if(pos<=0 || pos>=count+2){
	
		printf("Envalid position\n");

	}else if(pos == 1){
	
		addatfirst();

	}else if(pos == count+1){

		addnode();	

	}else{
	
		node *newnode = createnode();

		node *temp = head;

		while(pos-2){
		
			temp = temp->next;
			pos--;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		newnode->next->prev = newnode;
	}
}
void deletefirst(){

	if(head == NULL){
	
		printf("Already empty\n");
	}else{
	
		node *temp = head;
	
		head = head->next;
		free(head->next->prev);
		
		head->prev = NULL;

	}
}
void deletelast(){

	if(head == NULL){
	
		printf("LL is alredy empty\n");
	}else{
	
		int count = countnode();

		if(count == 1){
		
			deletefirst();
		}else{
		
			node *temp = head;

			while(temp->next->next != 0){
			
				temp = temp->next;
			}
			
			free(temp->next->prev);
			free(temp->next);

			temp->next = NULL;
		}
	}
}
void deleteatpos(){

	int pos;
	printf("which node do u want to del,enter any pos\n");
	scanf("%d",&pos);

	if(head == 0){
	
		printf("LL is empty\n");
	}else{
	
		int count = countnode();

		if(pos<=0 || pos>=count+1){
		
			printf("invalid input\n");
		}
		else if(pos == 1){
		
			deletefirst();
		}
		else if(pos == count){
		
			deletelast();
		}else{
		
			node* temp = head;

			while(pos-2){
			
				temp = temp->next;
				pos--;
			}
			/*
			temp->next = temp->next->next;
			temp->next->next->prev = temp;

			free(temp->next);
			*/

			temp1->next = temp->next->next;
			free(temp->next->prev);

			temp->next->prev = temp;
		}
	}
}

void main(){

	char choice;

	do{
	
		printf("1.add node\n");
		printf("2.Show total nodes\n");
		printf("3.count\n");
		printf("4.Add at FIRST position\n");
		printf("5.Add RANDOM position\n");
		printf("6.Remove first \n");
		printf("7.Remove  RANDOM\n");
		printf("8.Remove last \n");
		
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
				//printf("total nodes = %d\n",countnode());
				countnode();
				break;
			case 4:
				addatfirst();
				break;
			case 5:
				{
					int pos;
					printf("enter position\n");
					scanf("%d",&pos);

					addatposition(pos);
				}
				break;
			case 6:
				deletefirst();
				break;
			case 7:
				deleteatpos();
				break;
			case 8:
				deletelast();
				break;
			default:
				printf("Wrong choice\n");

		}
		getchar();
		printf("Do you to continue\n");
		scanf("%c",&choice);
	
	}while(choice == 'y' || choice == 'Y' );


}


	








