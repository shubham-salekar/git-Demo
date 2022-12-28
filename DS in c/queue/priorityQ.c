#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
    int priority;
	struct node *next;

}node;

node *head = NULL;
int count = 0;

node* createnode(){

        count++;
	node *newnode = (node*)malloc(sizeof(node));

	printf("Enter Data\n");
	scanf("%d",&(newnode->data));

    do{
    
        printf("Enter priority between 0 to 5\n");

        scanf("%d",&newnode->priority);

    }while(newnode->priority <= -1 || newnode->priority >= 6 ) ;

	newnode->next = NULL;

	return newnode;

}
void add_at_pos(int,node*);

node* addnode(){

    node *newnode = createnode();

    int pos = 0;

    if(head == NULL){
       
        pos++;
        
    }else{

        pos=1;
        node *temp = head;

        while(temp != NULL){
            
            
            if(newnode->priority == temp->priority){

                pos++;
            	temp = temp->next;

            }else if(newnode->priority > temp->priority){
            
                pos++ ;
            	temp = temp->next;
            }
	    	else {
		 	   break ;
	    	}
        }
    }
    add_at_pos(pos,newnode);

}
void addatfirst(node* newnode){

	if(head == NULL){
	
		head = newnode;
	}
	else{
	
		newnode->next = head;
		head = newnode;
	}
}
void addlast(node *newnode){

    
	if(head == NULL){
	
		head = newnode;
	}else{
	
		node *temp = head;
		while(temp -> next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void add_at_pos(int pos,node* newnode){

    if(pos == 1){
	
		addatfirst(newnode);
	
	}else if(pos == count){
	
		addlast(newnode);

	}else{

		node *temp = head;

		while(pos-2){
		
			temp = temp->next;
            pos--;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}
void printll(){

	if(head == 0){
	
		printf("Queue is Empty\n");
	}else{
		node* temp = head;
	
		while(temp->next != NULL){
		
			printf("| %d |->",temp->data);

			temp = temp->next;
		}
		printf("| %d |\n",temp->data);
	}
}
int flag = 0;
int  delete(){


	if(head == NULL){
	
		flag = 0;
		return -1;
	
	}else {
		
		flag = 1;
		int x = head->data;

		if(head ->next == NULL){
		
			free(head);
			head = NULL;

		}else{
	
			node *temp = head;
			head = temp->next;
			free(temp);
		}
		return x;
	}

}

void main(){

    char choice;

    do{

        printf("1.addnode\n2.print\n3.delete\n");

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
			case 3:{
				int ret = delete();
				if(flag == 0){
					printf("alredy empty\n");
				}else{
					printf("%d is deleted\n",ret);
				}
			}
				break;
            default:
                printf("Invalid choice\n");
                break;
        }
        getchar();
        printf("Do u want to continue\n");
        scanf("%c",&choice);

    }while(choice == 'Y' || choice == 'y');
}
