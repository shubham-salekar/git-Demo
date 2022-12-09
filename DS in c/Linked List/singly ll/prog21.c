
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
void printll(){

	demo *temp = head;

	while(temp != 0){
	
		printf("| %d |",temp->data);

		temp = temp->next;
	}
}
void sec_Occ_num(){

	int number;
	printf("Enter search number \n");
	scanf("%d",&number);

	demo *temp1 = head;
	demo *temp2 = head;

	int count = 0;
	int count1 = 0;
	int count2 = 0;

	while(temp1 != NULL){
	
		if(temp1->data == number){
		
			count1++;
		}
		temp1 = temp1->next;
	}
	printll();
	printf("\n");

	if(head == 0){
	
		printf("Link List is empty\n");
	}else{
		if(count1 == 0){
	
			printf("search number is not present in list\n");
		}
		else if(count1 == 1){
	
			printf("search element is occure only 1 time\n");

		}else{
	
			while(temp2 != NULL){
	
				count++;

				if(temp2->data == number){
		
					count2++;
					if(count2 == (count1-1)){
			
						printf("Second last occurance of number is at position %d\n",count);
						break;

					}
				}
				temp2 = temp2->next;
			}
		}	
	}
}

void main(){

	
	char choice;

	do{
	
		printf("1.addnode\n");
		printf("2.find second occurance position of number\n");
		printf("3.printll\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:
				addnode();
				break;

			case 2:
				sec_Occ_num();
				break;
			case 3:
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

