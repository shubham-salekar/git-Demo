#include<stdio.h>
#include<stdlib.h>

typedef struct Demo{

    int data;
    struct Demo *next;

}demo;

demo *head1 = NULL;
demo *head2 = NULL;

int count1 = 0;
int count2 = 0;
int count3 = 0;

int flag1 = 0;


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
int sublist(){

    demo *temp1 = head1;
    demo *temp2 = head2;

    if(count1<count2){

        printf("destination list is smaller than source list.\n");
        
    }else{
    
        for(int i=1 ; i<=count2 ; i++){

            if(temp1->data == temp2->data){

                temp1 = temp1->next;
                temp2 = temp2->next;

                count3++;
                flag1 = 1;

                if(count3 == count1){

                    return i;
                    break;
                }

            }
            else{

                if(flag1 == 1){

                    temp1 = head1;
                    count3 = 0;

                }else{

                    temp2 = temp2->next;
                }
            }
        }
        return -1;
    }
}

void main(){

    char choice;

    do{
    
        printf("1.addnode in Source LL \n2.addnode in destination LL \n3.print source LL \n4.print destination LL \n5.check for sublist LL\n");
        
        int ch;
        printf("Enter choice\n");
        scanf("%d",&ch);

        switch(ch){

            case 1:{

                int n;
                printf("Enter how many node do u want to add in LL 1:\n");
                scanf("%d",&n);
            
                for(int i=1 ; i<=n ; i++){
                    
                    count1++;
                    head1 = addnode(head1);
                }
            }
            break;
            case 2:{

                int n;
                printf("Enter how many node do u want to add in LL 2:\n");
                scanf("%d",&n);

                for(int i=1 ; i<=n ; i++){

                    count2++;
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

                int ret = sublist();
                if(ret == -1){
                    printf("source is not sublist of destination\n");
                }
                else{
                    printf("source is sublist of destination, last sublist is found at pos %d\n",ret);
                }
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