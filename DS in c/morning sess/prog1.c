// concat last n nodes to first linklist

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;
}node;

node *head1 = NULL;
node *head2 = NULL;

node *createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	printf("enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}
node* addnode(node *head){

	node *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		node *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return head;
}
int countnode(node *head){

	int count = 0;
	node *temp = head;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}
	return count;
}
int printll(node *head){

	if(head == NULL){
	
		printf("LL IS EMPTY\n");
		return -1;
	}else{
	
		node *temp = head;
		while(temp->next != NULL){
		
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
	return 0;

}
int concatLL(){

	if(head2 == NULL){
	
		printf("node is empty,no node is present to concat\n");
		return -1;
	}else{

		node *temp = head1;
		while(temp->next != NULL){
	
			temp = temp->next;
		}
		temp->next = head2;
	}
	return 0;
}
int concatnlast(){

	int n;
	printf("enter node count to concat \n");
	scanf("%d",&n);

	int count = countnode(head2);

	if(n <= 0 || n>= count){
	
		printf("invalid nodeposition\n");
		return -1;
	}
	else {
		if(head2 == NULL){
	
			printf("link list is empty\n");
		}
		else if(head1 ==NULL){
		
			printf("no node present to concat\n");
		}
		else{

			node *temp1 = head1;
			while(temp1->next != NULL){
	
				temp1= temp1->next;
			}
	
			node *temp2 = head2;

			int val = countnode(head2)-n;

			while(val){

				temp2 = temp2->next;
				val--;
		
			}
			temp1->next = temp2;
		}
		return 0;
	}
}
void main(){

	int n;
	printf("enter node count for LL 1\n");
	scanf("%d",&n);

	for(int i=1 ; i<=n ; i++){
	
		head1 = addnode(head1);
	}
	printf("enter node count for LL 2\n");
	scanf("%d",&n);

	for(int i=1 ;i<=n ; i++){
	
		head2 = addnode(head2);
	}
//	printf("count ll 1 = %d\n",countnode(head1));
//	printf("count ll 2 = %d\n",countnode(head2));

	printll(head1);
	printll(head2);

	/*
	concatLL();
	printll(head1);
	*/

	concatnlast();
	printll(head1);
}

