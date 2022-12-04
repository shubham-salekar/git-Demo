#include<stdio.h>
#include<stdlib.h>

typedef struct festival{

	char fname[20];
	int month;
	struct festival *next;

}fest;

fest *head = NULL;

void addnode(){

	fest *newnode = malloc(sizeof(fest));

	printf("Enter festival name\n");
	scanf("%[^\n]",newnode->fname);

	printf("Enter number of month\n");
	scanf("%d",&newnode->month);

	getchar();

	newnode->next = NULL;

	if(head == NULL){
	
		head = newnode;
	}else{
	
		fest *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printll(){

	fest *temp = head;

	while( temp != NULL){
		
		printf("%s ",temp->fname);
		printf("%d ",temp->month );
		
		temp = temp->next;
	}
	printf("\n");
}
void main(){

	addnode();
	addnode();
	addnode();

	printll();
}

























