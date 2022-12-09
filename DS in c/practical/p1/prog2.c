#include<stdio.h>
#include<stdlib.h>

typedef struct states{

	char sname[20];
	double population;
	double budget;
	float litrecy;
	struct states *next;

}states;

states *head = NULL;

void addnode(){

	states *newnode = malloc(sizeof(states));

	printf("Enter state name\n");
	scanf("%[^\n]",newnode->sname);

	printf("Enter population\n");
	scanf("%lf",&newnode->population);
	
	printf("Enter budget\n");
	scanf("%lf",&newnode->budget);

	printf("Enter Litrecy\n");
	scanf("%f",&newnode->litrecy);

	getchar();

	newnode->next = NULL;

	if(head == NULL){
	
		head = newnode;
	}else{
	
		states *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printll(){

	states *temp = head;

	while( temp != NULL){
		
		printf("%s  ",temp->sname);
		printf("%lf ",temp->population);
		printf("%lf ",temp->budget);
		printf("%f ",temp->litrecy);
		
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

























