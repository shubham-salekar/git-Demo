// inplace reverse SCLL

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;

}node;
node  *head = NULL;

node* createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	printf("Enter data\n");
	scanf("%d",&(newnode->data));

	newnode->next = NULL;

	return newnode;

}
void addnode(){

	node* newnode = createnode();
	
	if(head == NULL){
	
		head = newnode;
		newnode->next = head;
	}else{
	
		node *temp = head;
		while(temp -> next != head){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->next = head;
	}

}
void printll(){

	if(head == 0){
	
		printf("Linked list is Empty\n");
	}else{
		node* temp = head;
	
		while(temp->next != head){
		
			printf("| %d |->",temp->data);

			temp = temp->next;
		}
		printf("| %d |\n",temp->data);
	}
}
void inplaceR(){

        node *temp1 = NULL;
        node *temp2 = NULL;
        node *temp3 = head;

        while(temp2 != head){

            temp2 = temp3->next;
            temp3->next = temp1;
            temp1 = temp3;
            temp3 = temp2;
        }
        head->next = temp1;
        head = temp1; 
}
void main(){

    char choice;

    do
    {

        printf("1.addnode\n");
        printf("2.show all nodes\n");
        printf("3.INPLACE reverse\n");

        int ch;
        printf("enter choice\n");
        scanf("%d", &ch);

        switch (ch){
            case 1:{

                int n;
                printf("enter node count\n");
                scanf("%d",&n);

                for(int i=1 ; i<=n ; i++){
                    addnode();
                }
            }
                 break;
            case 2:
                printll();
                break;
            case 3:
                inplaceR();
                break;
            default:
                printf("unknown choice\n");
                break;
        }
        getchar();
        printf("do you want to contonue\n");
        scanf("%c",&choice);

    }while(choice == 'Y' || choice == 'y');
}
