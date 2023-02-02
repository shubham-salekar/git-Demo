// inplace reverse SLL

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	int data;
	struct node *next;
}node;

node *head = NULL;

node *createnode(){

	node *newnode = (node*)malloc(sizeof(node));

	printf("enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}
void addnode(){

	node *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		node *temp = head;
		while(temp->next != NULL){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
	
}
int printll(){

	if(head == NULL){
	
		printf("LL IS EMPTY\n");
		return -1;
	}else{
	
		node *temp = head;
		while(temp->next != NULL){
		
			printf("|%d|->",temp->data);
			temp = temp->next;
		}
		printf("|%d|\n",temp->data);
	}
	return 0;

}
void inplaceR(){

    node *temp1 = NULL;
    node *temp2 = NULL;

    while(head != NULL){

        temp2 = head->next;
        head->next = temp1;
        temp1 = head;
        head = temp2;

    }
    head = temp1;
}
void main(){

    char choice;

    do
    {

        printf("1.addnode\n");
        printf("2.show\n");
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
