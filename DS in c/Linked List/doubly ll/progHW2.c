
// real time example of doubly link list

#include<stdio.h>
#include<stdlib.h>

typedef struct library{

	struct library *prev;
	int rowno;
	struct library *next;
}library;

library *head = NULL;

library* createnode(){

	library *newnode = (library*)malloc(sizeof(library));

	newnode->prev = NULL;

	printf("Enter row id.\n");
	scanf("%d",&newnode->rowno);

	newnode->next = NULL;

	return newnode;
}
void addnode(){

	library *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		library *temp = head;

		while(temp->next !=0){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode ->prev = temp;
	}
}
int countnode(){

	int count = 0;

	if(head == NULL){
	
		printf("Library IS EMPTY\n");
	}else{
		library *temp = head ;
		
		while(temp != NULL){
	
			count++;
			temp=temp->next;
		}
	
	}
//	printf("total row count = %d",count);
	return count;
}
void printll(){

	if(head == NULL){
	
		printf("library is empty\n");
	}else{
	
		library *temp = head;
	
		while(temp->next !=0){
	
			printf("| %d |->",temp->rowno);

			temp = temp->next;
		}	
		printf("| %d |\n",temp->rowno);
	}
}
void addatfirst(){

	library *newnode = createnode();

	if(head == 0){
	
		head = newnode;
	}else{
		
		newnode->next = head;
		head->prev = newnode;
		head = newnode;

	}
}
void addatposition(int pos){

	int count = countnode();

	if(pos<=0 || pos>=count+2){
	
		printf("Envalid position\n");

	}else if(pos == 1){
	
		addatfirst();

	}else if(pos == count+1){

		addnode();	

	}else{
	
		library *newnode = createnode();

		library *temp = head;

		while(pos-2){
		
			temp = temp->next;
			pos--;
		}
		newnode->next = temp->next;
		newnode->prev = temp;
		temp->next = newnode;
		newnode->next->prev = newnode;
	}
}
void deletefirst(){

	if(head == NULL){
	
		printf("library is Already empty\n");
	}else{

		int count = countnode();

		if(count == 1){
		
			free(head);
			head = NULL;
		}else{
	
			head = head->next;
			free(head->prev);
			head->prev = NULL;

		}
	}
}
void deletelast(){

	if(head == NULL){
	
		printf("Library is alredy empty\n");
	}else{
	
		int count = countnode();

		if(count == 1){
		
			free(head);
			head = NULL;
		}else{
		
			library *temp = head;

			while(temp->next->next != 0){
			
				temp = temp->next;
			}
			
		//	free(temp->next->prev);
			free(temp->next);

			temp->next = NULL;
		}
	}
}
void deleteatpos(){

	int pos;
	printf("which row do u want to remove,enter row no.\n");
	scanf("%d",&pos);

	if(head == 0){
	
		printf("LL is empty\n");
	}else{
	
		int count = countnode();

		if(pos<=0 || pos>=count+1){
		
			printf("invalid input\n");
		}
		else if(pos == 1){
		
			deletefirst();
		}
		else if(pos == count){
		
			deletelast();
		}else{
		
			library* temp = head;

			while(pos-2){
			
				temp = temp->next;
				pos--;
			}
			temp->next = temp->next->next;
			free(temp->next->prev);

			temp->next->prev = temp;
		}
	}
}

void main(){

	char choice;

	do{
	
		printf("1.add row\n");
		printf("2.Show total rows\n");
		printf("3.count of total rows\n");
		printf("4.Add row at FIRST position\n");
		printf("5.Add row at given position\n");
		printf("6.Remove first row\n");
		printf("7.Remove given row\n");
		printf("8.Remove last row\n");
		
		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				int n;
				printf("enter rows count\n");
				scanf("%d",&n);

				for (int i=1 ; i<=n ; i++){
				
					addnode();
				}
			       }
				break;
			case 2:
				printll();
				break;
			case 3:
				printf("total nodes = %d\n",countnode());
			//	countnode();
				break;
			case 4:
				addatfirst();
				break;
			case 5:
				{
					int pos;
					printf("enter position\n");
					scanf("%d",&pos);

					addatposition(pos);
				}
				break;
			case 6:
				deletefirst();
				break;
			case 7:
				deleteatpos();
				break;
			case 8:
				deletelast();
				break;
			default:
				printf("Wrong choice\n");

		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&choice);
	
	}while(choice == 'y' || choice == 'Y' );


}


	








