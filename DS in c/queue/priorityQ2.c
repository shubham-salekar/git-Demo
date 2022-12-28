#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
    int priority;
	struct node *next;

}node;

node *front = NULL;
node *rear = NULL;

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

    if(front == NULL){
       
        pos++;
        
    }else{

        pos=1;
        node *temp = front;

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

	if(front == NULL){
	
		front = newnode;
        rear = newnode;
	}
	else{

		newnode->next = front;
		front = newnode;
	}
}
void addlast(node *newnode){

    
	if(front == NULL){
	
		front = newnode;
        rear = newnode;

	}else{
	
		rear->next = newnode;
		rear = newnode;
	}
}
void add_at_pos(int pos,node* newnode){

    if(pos == 1){
	
		addatfirst(newnode);
	
	}else if(pos == count){
	
		addlast(newnode);

	}else{

		node *temp = front;

		while(pos-2){
		
			temp = temp->next;
            pos--;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
}
void printll(){

	if(front == 0){
	
		printf("Queue is Empty\n");
	}else{
		node* temp = front;
	
		while(temp != rear){
		
			printf("| %d |->",temp->data);

			temp = temp->next;
		}
		printf("| %d |\n",temp->data);
	}
}
int flag = 0;
int  delete(){


	if(front == NULL){
	
		flag = 0;
		return -1;
	
	}else {
		
		flag = 1;
		int x = front->data;

		if(front ->next == NULL){
		
			free(front);
			front = NULL;
            rear = NULL;

		}else{
	
			node *temp = front;
			front = temp->next;
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
