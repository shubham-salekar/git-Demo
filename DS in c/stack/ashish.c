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

    int x;
    /*printf("Enter priority between 0 to 5\n");
    while(1){

        scanf("%d",&x);
        if( x >= 0 && x <= 5){
            
            break;

        }else if( x<= -1 || x>= 6){

            printf("Invalid priority , enter priority between 0 to 5\n");
        }
    }*/
    do{
    
        printf("Enter priority between 0 to 5\n");

        scanf("%d",&x);

    }while(x <= -1 || x >= 6 );

    newnode->priority = x;

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

       // pos++;
        node *temp = head;

        while(temp != NULL){
            
            pos++;
            
            if(newnode->priority == temp->priority){

                pos++;

            }else if(newnode->priority < temp->priority){
            
                break;
            }
            temp = temp->next;
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
	
		head == newnode;
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
void main(){

    char choice;

    do{

        printf("1.addnode\n2.print\n");

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
            default:
                printf("Invalid choice\n");
                break;
        }
        getchar();
        printf("Do u want to continue\n");
        scanf("%c",&choice);

    }while(choice == 'Y' || choice == 'y');
}