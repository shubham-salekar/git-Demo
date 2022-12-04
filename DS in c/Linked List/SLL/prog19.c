#include<stdio.h>
#include<stdlib.h>

typedef struct Employee{

	char name[20];
	int id;
	struct Employee *next;

}emp;

emp *head = 0;

emp* createnode(){

	emp *newnode = (emp*)malloc(sizeof(emp));

	getchar();

	printf("Enter employee name\n");

	char ch;
	int i = 0;
	while((ch = getchar()) != '\n'){
	
		(*newnode).name[i] = ch;
		i++;
	}
	printf("Enter employee id\n");
	scanf("%d",&newnode->id);

	newnode->next = NULL;

	return newnode;
}
void addnode(){

	emp *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		emp *temp = head;
		while( temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void count(){

	emp *temp = head;
	int count = 0;

	while( temp!= NULL){
	
		count++;
		temp = temp->next;
	}
	printf("total nodes are %d \n",count);
}
void addatfirst(){

	emp *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
		newnode->next = head;
		head = newnode;
	}
}
void addatposition(){

	emp *newnode = createnode();
	emp *temp = head;

	int pos;
	printf("Enter position where you want to add node\n");
	scanf("%d",&pos);

	while(pos-2){
	
		temp = temp->next;
		pos--;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}
void printll(){

	emp* temp = head;
	while( temp != 0){
	
		printf("| %s ->",temp->name);
		printf(" %d |",temp->id);

		temp = temp->next;

	}
}
void main(){

	int node;
	printf("Enter how many nodes you want\n");
	scanf("%d",&node);

	for(int i=1 ; i<=node ; i++){
	
		addnode();
	}
	printll();

	printf("\n");
	count();

	
	printf("\ndo you want to add node at first if yes enter y or if no press any key\n");
	
	char ch;
	scanf(" %c",&ch);

	if(ch == 'y' || ch == 'Y'){
		
		addatfirst();
	}
	printll();
	printf("\n");
	
	printf("do you want to add node at any position,if yes enter y or if no press any key\n");
	scanf(" %c",&ch);

	if(ch == 'y' || ch == 'Y'){
	
		addatposition();
	}
	printll();
	printf("\n");

}
























