#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

	int data;
	struct Demo* next;

}demo;

demo *head = NULL;

demo* createnode(){

	demo* newnode = (demo*)malloc(sizeof(demo));

	printf("Enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}
void addnode(){

	demo *newnode = createnode();

	if(head == 0){
	
		head = newnode;
	}else{
	
		demo *temp = head;
		while(temp->next != 0){
		
			temp = temp->next;
		}
		temp->next = newnode;

	}
}
void addatfirst(){

	demo* newnode = createnode();

	demo *temp = head;

	if(head == NULL){
	
		head = newnode;
	}else{
	
		newnode->next = head;
		head = newnode;


	}
}
void count(){

	demo *temp = head;
	int count = 0;
	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}
	printf("count = %d",count);

}
void addlast(demo *newnode){

	demo *temp = head;
	while(temp->next != 0){
	
		temp = temp->next;
	}
	temp->next = newnode;

}
void addatposition(){

	demo *newnode = createnode();

	demo *temp = head;

	int pos;
	printf("Enter position where you want to add this node\n");
	scanf("%d",&pos);

	int count = 0;
	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}

	if(head == NULL){
	
		head = newnode;
	
	}else if(pos > count){
	
		printf("wrong position,only %d nodes are available and your choice is %d hence we adding this node at last\n",count,pos);
		addlast(newnode);

	}else {
	
		demo *temp1 = head;
		
		for(int i = 1; i<pos-1 ; i++){
		
			temp1 = temp1->next;
		}

		newnode->next = temp1->next;
		temp1->next = newnode;

	}
}
void deletefirst(){

	demo *temp = head;
	head = temp->next;

	free(temp);
}
void deletelast(){

	demo *temp = head;

	while(temp->next->next != 0){
	
		temp = temp->next;
	}
	free(temp->next);

	temp->next = NULL;
}
void printll(){

	demo *temp = head;

	while(temp != 0){
	
		printf("| %d |",temp->data);

		temp = temp->next;
	}
}
void main(){

	char choice;

	do{
	
		printf("1.addnode\n");
		printf("2.addfirst\n");
		printf("3.addatposition\n");
		printf("4.count\n");
		printf("5.deletefirst\n");
		printf("6.deletelast\n");
		printf("7.printll\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:
				addnode();
				break;

			case 2:
				addatfirst();
				break;
			case 3:
				addatposition();
				break;
			case 4:
				count();
				break;
			case 5:
				deletefirst();
				break;
			case 6:
				deletelast();
				break;
			case 7:
				printll();
				break;
			default:
				printf("Wrong choice\n");
				break;
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&choice);

	}while( choice == 'y' || choice =='Y');
}








