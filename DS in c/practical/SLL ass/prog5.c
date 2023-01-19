#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

    int data;
    struct Demo *next;

}demo;

demo *head1 = NULL;
demo *head2 = NULL;
demo *head3 = NULL;

demo *createnode(){

    demo *newnode = (demo*) malloc(sizeof(demo));

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
void concatn(int start, int end){

    int n = end -start;
    
    demo *temp3 = head1;

    while(start-1){
        temp3 = temp3->next;
        start--;
    }

    for(int i = 0; i<=n ; i++){
 
        demo* newnode = (demo*) malloc(sizeof(demo));

        newnode->data = temp3->data;

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
        temp3 = temp3->next;   
    }
}
int concatLL(int start, int end){

    demo *temp1 = head1;
    demo *temp2 = head2;

    if(head1 == NULL){

        printf("source LL is Empty\n");
        return -1;
    }else{

        if(head2 == NULL){

            printf("Destination LL is Empty,we are Adding source ll in destination\n");

        }
        while(temp2->next != NULL){
        
            temp2 = temp2->next;
        }
        concatn(start,end);

        temp2->next = head3;
    }
}
void main(){

    char choice;

    do{
    
        printf("1.addnode in LL 1\n2.addnode in LL 2\n3.print LL 1\n4.print LL 2\n5.concat LL\n");
        
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

                int n;
                printf("Enter how many node do u want to add in LL 2:\n");
                scanf("%d",&n);

                for(int i=1 ; i<=n ; i++){

                    head2 = addnode(head2);
                }
            }
            break;
            case 3:{
                
                print(head1);
                
            }
            break;
            case 4:{
                
                print(head2);
                
            }
            break;
            case 5:{

                int start ,end ;
                printf("enter starting range num \n");
                scanf("%d",&start);
                
                printf("enter ending range num \n");
                scanf("%d",&end);

                concatLL(start,end);
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