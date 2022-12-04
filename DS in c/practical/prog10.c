#include<stdio.h>
#include<stdlib.h>

typedef struct building{

	char bname[20];
	int floor;
	struct building *next;

}build;

build *head = NULL;

void addnode(){

	build *newnode = malloc(sizeof(build));

	printf("Enter building name\n");
	scanf("%[^\n]%*c",newnode->bname);

	printf("Enter number of floors\n");
	scanf("%d",&newnode->floor);

	getchar();

	newnode->next = NULL;

	if(head == NULL){
	
		head = newnode;
	}else{
	
	
	        build *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printll(){

	build *temp = head;

	while( temp != NULL){
		
		printf("| %s -> ",temp->bname);
		printf("%d |",temp->floor);
		
		temp = temp->next;
	}
	printf("\n");
}
void main(){

	addnode();
	addnode();
	addnode();
	addnode();
	addnode();

	printll();
}

























