#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

    int data;
    struct Demo *next;

}demo;

demo *head = NULL;

demo *createnode(){

    demo *newnode = (demo*) malloc(sizeof(demo));

    printf("Enter number\n");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    return newnode;
}
void addnode(){

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
}
int checkocc(int n){

    if(head == 0){

        return -1;
    }else{

        int count = 0;

        if(head->next == NULL){
            
            if(head->data == n){
            
                count++;
            
            }
        }else{

            demo *temp = head;
            while(temp != NULL){

                if(temp->data == n){

                    count++;
                }
                temp = temp->next;
            }
            
           // printf("occ = %d\n", count);
        }
        return count;
    }
}
int print(){

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

void main(){

    char choice;

    printf("1.addnode\n2.check Occurance\n3.printf\n");

    do{
        int ch;
        printf("Enter choice\n");
        scanf("%d",&ch);

        switch(ch){

            case 1:{

                int n;
                printf("Enter how many node do u want to add\n");
                scanf("%d",&n);

                for(int i=1 ; i<=n ; i++){

                    addnode();
                }
            }
            break;
            case 2:{
                int n;
                printf("Enter number for checking occurence\n");
                scanf("%d",&n);

               // checkocc(n);
            
                int count = checkocc(n);

                if(count == 0){
                    printf("%d is not present in linklist\n ",n);

                }else if(count == -1){
                    printf("Link list is empty\n ");
                    
                }else{

                    printf("Occurance of %d is %d times\n",n,count);
                }
            }
            break;
            case 3:{
                
                print();
                
            }break;
            default :
                printf("wrong choice\n");
                break;
        }
        getchar();
        printf("Do u want to continue?\n");
        scanf("%c",&choice);

    }while(choice == 'Y' || choice == 'y');
}