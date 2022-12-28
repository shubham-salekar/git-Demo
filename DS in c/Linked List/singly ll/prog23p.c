#include<stdio.h>
#include<stdlib.h>

typedef struct cupboard{

	int id;
	struct cupboard *next;

}cb;

cb *head = NULL;

cb* createnode(){

	cb *newnode = (cb*)malloc(sizeof(cb));

	printf("Enter Drawer id\n");
	scanf("%d",&(newnode->id));

	newnode->next = NULL;

	return newnode;

}
void addnode(){

	cb* newnode = createnode();
	
	if(head == NULL){
	
		head == newnode;
	}else{
	
		cb *temp = head;
		while(temp -> next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}

}
void printll(){

	if(head == 0){
	
		printf("cupboard is Empty\n");
	}else{
		cb* temp = head;
	
		while(temp->next != NULL){
		
			printf("| %d |->",temp->id);

			temp = temp->next;
		}
		printf("| %d |",temp->id);
	}
}
int countnode(){

	cb *temp = head;
	int count = 0;

	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}
	return count;
}
void addatfirst(){

	cb *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}
	else{
	
		newnode->next = head;
		head = newnode;
	}
}
void addatgiven(){

	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);

	int count = countnode();

	if(pos <= 0 || pos >= count+2){
	
		printf("Invalid position\n");
	
	}else if(count == 1){
	
		addatfirst();
	
	}else if(count == count+1){
	
		addnode();
	}else{
	
		cb *newnode = createnode();
		cb *temp = head;
		for(int i=1 ; i<= pos-1 ; i++){
		
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}
void deletefirst(){


	if(head == NULL){
	
		printf("Alredy Empty\n");
	
	}else if(head ->next == NULL){
	
		free(head);
		head = NULL;

	}else{
	
		cb *temp = head;
		head = temp->next;
		free(temp);
	}

}

void deletelast(){

	if(head == NULL){
	
		printf("cupboard is alredy empty\n");
	
	}else if(head->next == NULL){
	
		free(head);
		head == NULL;

	}else{
	
		cb *temp = head;
		while(temp->next->next != NULL){
		
			temp =temp->next;
		}
		free(temp->next);
		temp->next = NULL;

	}
}
void deleteatgiven(){
	
	int pos;
	printf("Enter position\n");
	scanf("%d",&pos);

	int count = countnode();

	if(pos <= 0 || pos >= count+2 ){
	
		printf("Invalid position\n");

	}else if(pos == 1){
	
		deletefirst();

	}else if(pos == count ){
	
		deletelast();	

	}else if(head == NULL){
	
		printf("cupboard is alredy empty\n");
	}else{
	
		cb *temp = head;
		while(pos-2){
		
			temp = temp->next;
		}
		cb *temp2 = temp;
		temp->next = temp->next->next;
		free(temp2->next);
		

	}

}

void main(){

	char choice;

	do{
	
		printf("1.add new drawer\n");
		printf("2.Show total Drawers\n");
		printf("3.count of all Drawers\n");
		printf("4.Add new drawer at FIRST position\n");
		printf("5.Add drawer at RANDOM position\n");
		printf("6.Remove the first Drawer\n");
		printf("7.Remove the RANDOM Drawer\n");
		printf("8.Remove last Drawer\n");
		
		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:
				addnode();
				break;
			case 2:
				printll();
				break;
			case 3:
				printf("total DRAWERS = %d\n",countnode());
				break;
			case 4:
				addatfirst();
				break;
			case 5:
				addatgiven();
				break;
			case 6:
				deletefirst();
				break;
			case 7:
				deleteatgiven();
				break;
			case 8:
				deletelast();
				break;
			default:
				printf("Wrong choice\n");

		}
		getchar();
		printf("Do you to continue\n");
		scanf("%c",&choice);
	
	}while(choice == 'y' || choice == 'Y' );


}
