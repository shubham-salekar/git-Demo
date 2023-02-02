// inplace reverse dll

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    struct node *prev;
    int data;
    struct node *next;

} node;
node *head = NULL;

node *createnode(){

    node *newnode = (node*)malloc(sizeof(node));

    newnode->prev = NULL;

    printf("Enter data\n");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    return newnode;
}
void addnode(){

        node *newnode= createnode();

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

        printf("LL is empty\n");
        return -1;
    }else{

        node *temp = head;
    
        while(temp->next != NULL){

            printf("|%d|->",temp->data);
            temp = temp->next;
        }
        printf("|%d|\n",temp->data);

        return 0;
    }
}
int inplaceR(){

    if(head == NULL){
        printf("LL is empty\n");
        return -1;
    }else if(head->next == NULL){

            printf("Only one node is present i.e. %d \n",head->data);
    }else{

            node *temp = NULL;
            while(head != NULL){
                
                head->prev = head->next;
                head->next = temp;

                if(head->prev == NULL){
                    head = temp->prev;
                   // break;
                }else{

                    temp = head;
                    head = head->prev;
                   // temp = head->prev;
                }
            }
        }
	return 0;
    }

void main(){

    char choice;

    do
    {

        printf("1.addnode\n");
        printf("2.printll\n");
        printf("3.INPLACE raverse\n");

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
