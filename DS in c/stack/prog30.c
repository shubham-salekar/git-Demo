// implementing stack by using linklist

#include<stdio.h>
#include<stdlib.h>

typedef struct node{

    int data;
    struct node *next;

} node;

node* head = NULL;
int size = 0;

node* createnode(){

    node *newnode = (node*) malloc(sizeof(node));
    printf("enter data\n");
    scanf("%d",&newnode->data);

    newnode->next = NULL;

    return newnode;
}
void push(){

    size++;
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
int pop(){

    int data1;
    if(head == NULL){

        printf("stack is empty\n");
        return -1;
    }else{

        if(head->next == NULL){

            data1 = head->data;
            free(head);
            head = NULL;
        }else{

            node *temp = head;
            while(temp->next->next != NULL){
                temp = temp->next;
            }
            data1 = temp->data;
            free(temp->next);
            temp->next = NULL;
        }
        return data1;
    }
}
int peek(){

    if(head == NULL){
        printf("stack is empty\n");
        return -1;
    }else{

        node *temp = head;
        while(temp->next != NULL){

            temp = temp->next;
        } 
        printf("%d\n",temp->data);
    
        return 0;
    }
    
}
void main(){

    int n;
    printf("Enter size of stack\n");
    scanf("%d",&n);

    char choice;
    int ret;

    do{
        printf("1.push\n2.pop\n3.peek\n");
        int ch;
        printf("Enter your choice\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:{
                if(size<=n){

                    push();
                }else{
                    printf("Stack overflow\n");
                }
            }
            break;

            case 2:{
                ret = pop();
                printf("%d is popped\n",ret);
            }
            break;
            case 3:
                peek();
                break;
        }
        getchar();
        printf("do u want to continue\n");
        scanf("%c",&choice);


    }while(choice == 'y' || choice == 'Y');
    
}