
#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;

}node;
node  *head = NULL;

node* createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	printf("Enter data\n");
	scanf("%d",&(newnode->data));

	newnode->next = NULL;

	return newnode;

}
void addnode(){

	node* newnode = createnode();
	
	if(head == NULL){
	
		head = newnode;
		newnode->next = head;
	}else{
	
		node *temp = head;
		while(temp -> next != head){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
	}

}
void printll(){

	if(head == 0){
	
		printf("Linked list is Empty\n");
	}else{
		node* temp = head;
	
		while(temp->next != head){
		
			printf("| %d |->",temp->data);

			temp = temp->next;
		}
		printf("| %d |\n",temp->data);
	}
}
int countnode(){

	node *temp = head;

	int count;
	if(head == NULL){
	
		count = 0;
	}else{
	
		count = 1;

		while(temp->next != head){
	
			count++;
			temp = temp->next;
		}
	}
	return count;
}
void addfirst(){

	node *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
		newnode -> next = head;
	}else{
	
		node *temp = head;
		newnode->next = head;

		while(temp->next != head){
		
			temp=temp->next;
		}
		head = newnode;
		temp->next = head;

	}
}
int addgiven(){

	int pos;
	printf("enter pos to add node\n");
	scanf("%d",&pos);

	int cnt = countnode();

	if(pos<=0 || pos>=cnt+2){
	
		printf("invalid position\n");
		return -1;

	}else{
	
		if(pos == 1){
		
			addfirst();
		}
		else if(pos == cnt+1){
		
			addnode();
		}else{
		
			node *newnode = createnode();

			node *temp = head;

			while(pos-2){
			
				temp = temp->next;
				pos--;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}

	}
	return 0;

}
int deletefirst(){

	if(head == NULL){
	
		printf("empty ll\n");
		return -1;
	}else{
		int cnt = countnode();

		if(cnt == 1){
		
			free(head);
			head = NULL;
		}
		else{
		
			node *temp1 = head;
			node *temp2 = head;

			while(temp2->next != head){
			
				temp2 = temp2->next;
			}
			head = head->next;

			free(temp1);
			temp2->next = head;
		}
	}

}
int deletelast(){

	if(head == NULL){
	
		printf("LL is empty\n");
		return -1;
	}else{
	
		int cnt = countnode();
		if(cnt == 1){
		
			free(head);
			head = NULL;
		}
		else {
		
			node *temp = head;

			while(temp->next->next != head){
			
				temp = temp->next;
			}
			free(temp->next);
			temp->next = head;
		}
	}
}
int deletegiven(){

	int pos;
	printf("enter pos which node do u want to delete\n");
	scanf("%d",&pos);

	int cnt = countnode();

	if(pos <= 0 || pos > cnt ){
	
		printf("invalid input\n");
		return -1;
	}else{
	
		if(pos == 1){
		
			deletefirst();
		}
		else if(pos == cnt){
		
			deletelast();
		}else{
		
			node *temp1 = head;

			while(pos-2){
			
				temp1 = temp1->next;
				pos--;
			}
			node *temp2 = temp1->next;
			temp1->next = temp1->next->next;
			free(temp2);

		}

	}
}
void main(){

	char choice;

	do{
	
		printf("1.add new node\n");
		printf("2.Show total nodes\n");
		printf("3.count\n");
		printf("4.Add at  FIRST position\n");
		printf("5.Add st given position\n");
		printf("6.delete first\n");
		printf("7.delete the given pos\n");
		printf("8.delete last\n");
		
		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				  int n;
				  printf("enter node count\n");
				  scanf("%d",&n);

				  for(int i=1 ; i<=n ; i++){
				  
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
				addfirst();
				break;
			case 5:
				addgiven();
				break;
			case 6:
				deletefirst();
				break;
			case 7:
				deletegiven();
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


