#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

    int data;
    struct Demo *next;

}demo;

demo *head1 = NULL;
demo *head2 = NULL;

int count = 0;

demo *createnode(){

    count++;
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
void copyn(int start, int end){

    int n = end -start;
    
    demo *temp1 = head1;

    while(start-1){
        temp1 = temp1->next;
        start--;
    }

    for(int i = 0; i<=n ; i++){
 
        demo* newnode = (demo*) malloc(sizeof(demo));

        newnode->data = temp1->data;

        if(head2 == 0){

            head2 = newnode;
        }else{

            demo *temp = head2;
            while(temp->next != NULL ){

                temp = temp->next;
            }
            temp->next = newnode;
        }
        newnode->next = NULL;
        temp1 = temp1->next;   
    }
}
int copyLL(int start, int end){

    if(head1 == NULL){

        printf("source LL is Empty\n");
        return -1;
    }else{

        if(start<=0){
            printf("Enter valid starting number (greater than 0)\n");
        
        }else if(start>=end){
            printf("Envalid range start must be less than end\n");

        }else if(end<=count){
            
            copyn(start,end);
            printf("nodes successfully copied\n");
       
        }else{
            printf("linklist only have %d nodes\n",count);
        }
    }
}
void main(){

    char choice;

    do{
    
        printf("1.addnode in LL 1\n2.print LL 1\n3.print copied LL\n4.copy LL\n");
        
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
                
                print(head2);
                
            }
            break;
            case 4:{

                int start ,end ;
                printf("enter starting range num \n");
                scanf("%d",&start);
                
                printf("enter ending range num \n");
                scanf("%d",&end);

                copyLL(start,end);
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