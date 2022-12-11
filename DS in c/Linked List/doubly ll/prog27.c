
// reverse  singly link list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;
}node;

node *head = NULL;

node* createnode(){

	node* newnode = (node*)malloc(sizeof(node));

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
int countnode(){

	if(head == 0){
	
		printf("empty LL\n");
		return -1;
	}else{
	
		node *temp = head;

		int cnt = 0;
		while(temp != 0){
		
			cnt++;
			temp = temp->next;
		}

		return cnt;
	}

}
int rev_LL(){

	if(head == NULL){
		
		printf("empty ll\n");
		return -1;
	}else{
		
		node *temp1 = head;
		node *temp2 = head;

		int cnt2 = countnode()/2;

		//printf("cnt2 = %d\n",cnt2);

		int n = 1;

		while(cnt2){
		
			int cnt1 = countnode(); 
			while(cnt1-n){
			
				temp2 = temp2->next;
				cnt1--;
			}
			
			int x = temp1->data;
			temp1->data = temp2->data;
			temp2->data = x;
			
			temp2 = head;

			cnt2--;
			n++;
			temp1 = temp1->next;
		}

	}
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
		printf("count = %d\n",countnode());
	}

	printf("reverse LL\n");

	rev_LL();

	printll();
	
}
