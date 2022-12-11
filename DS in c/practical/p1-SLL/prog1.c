#include<stdio.h>
#include<stdlib.h>

typedef struct malls{

	char mname[20];
	int nshops;
	float revenue;
	struct malls *next;

}mall;

mall *head = NULL;

void addnode(){

	mall *newnode = malloc(sizeof(mall));

	printf("Enter mall name\n");
	scanf("%[^\n]%*c",newnode->mname);

	printf("Enter number of shops\n");
	scanf("%d",&newnode->nshops);
	
	printf("Enter revenue\n");
	scanf("%f",&newnode->revenue);

	getchar();

	newnode->next = NULL;

	if(head == NULL){
	
		head = newnode;
	}else{
	
		mall *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void printll(){

	mall *temp = head;

	while( temp != NULL){
		
		printf("%s ",temp->mname);
		printf("%d ",temp->nshops);
		printf("%f ",temp->revenue);
		
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

























