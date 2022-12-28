//Stack using an Singly Linked List
# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>
struct Node {
	int data ;
	struct Node *next ;
} ;

struct Node *head=NULL ;
int size=0 ;
int flag=0 ;

int countNode() {
	struct Node *temp=head ;
	int count=0 ;
	while (temp!=NULL) {
		count++ ;
		temp=temp->next ;
	}
	return count ;
}

bool isFull() {
	if (countNode()==size) 
		return true ;
	else 
		return false ;
}

bool isEmpty() {
	if (head==NULL) 
		return true ;
	else 
		return false ;
}

struct Node *createnode() {
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node)) ;
	printf("Enter data\n") ;
	scanf("%d",&newnode->data) ;
	getchar() ;
	newnode->next=NULL ;
	return newnode ;
}

int addnode() {
	struct Node *newnode=createnode() ;
	if (head==NULL) {
		head=newnode ;
	}
	else {
		struct Node *temp=head ;
		while (temp->next!=NULL) {
			temp=temp->next ;
		}
		temp->next=newnode ;
	}
	return 0 ;
}

int push() {
	if (isFull()) 
		return -1 ;
	else {
		addnode() ;
		return 0 ;
	}
}

int pop () {
	if (isEmpty()) {
		flag=0 ;
		return -1 ;
	}
	else {
		if (head->next==NULL) {
			int val=head->data ;
			free(head) ;
			head=NULL ;
			flag=1 ;
			return val ;
		}
		else {
			struct Node *temp=head ;
			while (temp->next->next!=NULL) {
				temp=temp->next ;
			}
			int val=temp->next->data ;
			free(temp->next) ;
			temp->next=NULL ;
			flag=1 ;
			return val ;
		}
	}
}

int peak () {
	if (isEmpty()) {
		flag=0 ;
		return -1 ;
	}
	else {
		struct Node *temp=head ;
		while (temp->next!=NULL) {
			temp=temp->next ;
		}
		int val=temp->data ;
		flag=1 ;
		return val ;
	}
}

void main () {
	printf("Enter size for stack\n") ;
	scanf("%d",&size) ;

	char choice ;
	do {
		printf("1.push\n") ;
		printf("2.pop\n") ;
		printf("3.peak\n") ;
		printf("4.isEmpty\n") ;
		printf("5.isFull\n") ;

		int ch ;
		printf("Enter choice\n") ;
		scanf("%d",&ch) ;
		getchar() ;
		
		switch(ch) {
			case 1 :
				{
					int ret ;
					ret=push() ;
					if (ret==-1) {
						printf("Stack overflow\n") ;
					}
				}
				break ;
			case 2 :
				{
					int ret ;
					ret=pop() ;
					if (flag==0) {
						printf("Stack underflow\n") ;
					}
					else {
						printf("%d is popped value\n",ret) ;
					}
				}
				break ;
			case 3 :
				{
					int ret ;
					ret=peak() ;
					if (flag==0) {
						printf("Stack is empty\n") ;
					}
					else {
						printf("%d is peak value\n",ret) ;
					}
				}
				break ;
			case 4 :
				{
					bool ret ;
					ret=isEmpty() ;
					if (ret) {
						printf("Stack is empty\n") ;
					}
					else {
						printf("Stack is not empty\n") ;
					}
				}
				break ;
			case 5 :
				{
					bool ret ;
					ret=isFull() ;
					if (ret) {
						printf("Stack is full\n") ;
					}
					else {
						printf("Stack is not full\n") ;
					}
				}
				break ;
			default :
				printf("U entered wrong input\n") ;

		}
		printf("Do u want to continue\n") ;
		scanf("%c",&choice) ;
	}
	while(choice=='y' || choice=='Y') ;
}


				
