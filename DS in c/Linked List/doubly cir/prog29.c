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
		head->prev = head;
		head->next = head;
	}else{
	
		node *temp = head;
		while(temp->next != head){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode ->prev = temp;
		newnode->next = head;
		head->prev = newnode;

	}
}
int countnode(){

	if(head == NULL){
	
		printf("LL IS EMPTY\n");
		return -1;
	}else{
		int count = 1;
		node *temp = head ;
		
		while(temp->next != head){
	
			count++;
			temp=temp->next;
		}
		return count;
	}
	
}
void printll(){

	if(head == NULL){
	
		printf("LL is empty\n");
	}else{
		
		node *temp = head;
	
		while(temp->next!=head){
		
			printf("| %d |->",temp->data);
			temp = temp->next;

		}	
		printf("| %d |\n",temp->data);
	}

}
void addatfirst(){

	node *newnode = createnode();

	if(head == 0){
	
		head = newnode;
		head->prev = head;
		head->next = head;

	}else{
		
		newnode->next = head;
		newnode->prev = head->prev;
		head->prev->next = newnode;
		head = newnode;

		/*
		newnode->next = head;
		newnode->prev = head->prev;
		head->prev = newnode;
		head = newnode;
		head->prev->next = head;
		*/

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
		temp->next->prev = newnode;

		temp->next = newnode;
		newnode->prev = temp;
	}
}
int deletefirst(){

	if(head == NULL){
	
		printf("Already empty\n");
		return -1;

	}else{
	
		int count = countnode();

		if(count == 1){
		
			free(head);
			head = NULL;
		}else{
		/*
			node *temp = head;
	
			head->prev->next = head->next;
			head->next->prev = head->prev;
			head = head->next;

			free(temp);

		*///without temp

			head = head->next;
			head->prev = head->prev->prev;

			free(head->prev->next);
			head->prev->next = head;
		
		}

	}
	return 0;
}
int  deletelast(){

	if(head == NULL){
	
		printf("LL is alredy empty\n");
		return -1;

	}else{
	
		int count = countnode();

		if(count == 1  ){
		
			free(head);
			head = NULL;
			
		}else{
		
		//without temp

			head->prev = head->prev->prev;
			free(head->prev->next);
			
			head->prev->next = head;
		
		//with temp
		/*
			node *temp = head;

			while(temp->next->next != head){
			
				temp = temp->next;
			}
			free(temp->next);
			temp->next = head;
		
			temp = temp->next;
			head->prev = temp;
		*/
		}
	}
}
int deleteatpos(){

	int pos;
	printf("which node do u want to del,enter any pos\n");
	scanf("%d",&pos);

	int count = countnode();
	if(pos<=0 || pos>=count+2){
	
		printf("invalid position\n");
		return -1;
	}else{
		if(head == NULL){
		
			printf("LL is empty\n");
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

			temp->next = temp->next->next;
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
				printf("total nodes = %d\n",countnode());
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


	









