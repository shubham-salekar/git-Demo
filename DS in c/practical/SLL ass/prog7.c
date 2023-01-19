#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

    int data;
    struct Demo *next;

}demo;

demo *head1 = NULL;
demo *head3 = NULL;

int count = 0;

demo *createnode(){

    demo *newnode = (demo*) malloc(sizeof(demo));

    count++;

    printf("Enter number\n");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    return newnode;
}
demo * addnode(demo *head){

    demo *newnode = createnode();

    if(head == 0){

        head = newnode;
    }else{

        demo *temp = head;
        while(temp->next != NULL ){

            temp = temp->next;
        }
        temp->next = newnode;
    }
    return head;
}
int print(demo *head){

    if(head == NULL){

        printf("LinkList is empty\n");
        return -1;

    }else{

        demo *temp = head;
        while(temp->next != NULL){

            printf("|%d|->",temp->data);
            temp = temp->next;
        }
        printf("|%d|\n",temp->data);

    }
}
void copyn(int n){

    demo *temp1 = head1;

    int n1 = count-n;

    while(n1){
        temp1 = temp1->next;
        n1--;
    }

    for(int i = 1; i<=n ; i++){
 
        demo* newnode = (demo*) malloc(sizeof(demo));

        newnode->data = temp1->data;

        if(head3 == 0){

            head3 = newnode;
        }else{

            demo *temp = head3;
            while(temp->next != NULL ){

                temp = temp->next;
            }
            temp->next = newnode;
        }
        newnode->next = NULL;
        temp1 = temp1->next;   
    }
}
int copyLL(int n){

    if(head1 == NULL){

        printf("source LL is Empty\n");
        return -1;
    }else{

        if(n<=0){
            printf("Enter valid number (greater than 0)\n");
        
        }else if(n<=count){
            
            copyn(n);
            printf("%d nodes successfully copied\n",n);
       
        }else{
            printf("linklist only have %d nodes\n",count);
        }

    }
}
void main(){

    char choice;

    do{

        printf("1.addnode in LL 1\n2.print LL 1\n3.print copied LL \n4.copy LL\n");
        
        int ch;
        printf("Enter choice\n");
        scanf("%d",&ch);

        switch(ch){

            case 1:{

                int n;
                printf("Enter how many node do u want to add in LL 1:\n");
                scanf("%d",&n);

                for(int i=1 ; i<=n ; i++){

                    head1 = addnode(head1);
                }
            }
            break;
            case 2:{
                
                print(head1);
                
            }
            break;
            case 3:{
                
                print(head3);
                
            }
            break;
            case 4:{

                int n;
                printf("Enter how many nodes you want to copy\n");
                scanf("%d", &n);

                copyLL(n);
            }
            break;
            default :
                printf("wrong choice\n");
                break;
        }
        getchar();
        printf("Do u want to continue?\n");
        scanf("%c",&choice);

    }while(choice == 'Y' || choice == 'y');
}