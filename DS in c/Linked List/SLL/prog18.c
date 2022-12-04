#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct movies{

	char mname[20];
	float imdb;
	struct movies *next;
}mov;

mov *head = NULL;

void addnode(){

	mov *newnode = (mov*)malloc(sizeof(mov));

	printf("Enter movie name\n");
	fgets(newnode->mname,15,stdin);

	printf("Enter movie rating\n");
	scanf("%f",&(newnode->imdb));

	getchar();

	newnode->next = NULL;

	if(head == NULL){
	
		head = newnode;
	}else{
	
		mov *temp = head;

		while( temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}

}
void printll(){

	mov *temp = head;

	while( temp != NULL){
	
		removeNewLineChar(temp->mname);

		printf("%s ",temp->mname);
		printf("%f ",temp->imdb);

		temp = temp->next;
	}
}
void main(){

	addnode();
	addnode();
	addnode();
	addnode();

	printll();

}

















