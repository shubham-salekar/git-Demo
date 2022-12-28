// implementing stack using array.

#include <stdio.h>
#include<stdlib.h>

int size = 0;
int top = -1;

int push(int stack[]){

    if(top == size-1){

        printf("Stack overflow");
        return -1;
    }else{

        int data;
        printf("enter data\n");
        scanf("%d",&data);

        top++;
        stack[top] = data;
        return 0; 
    }

}
int pop(int *stack) {

    if(top == -1){

        printf("stack underflow\n");
        return -1;
    }else{

        int data = *(stack+top);
        top--;

        return data;
    }
}
int peek(int *stack) {

    if(top == -1){
        printf("stack underflow\n");
        return -1;

    }else{

        return stack[top];
    }
}
void main(){

    printf("Enter stack size\n");
    scanf("%d",&size);

    int stack[size];

    char choice;
    int ret;

    do{
        printf("1.push\n2.pop\n3.peek\n");
        int ch;
        printf("Enter your choice\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:
             push(stack);
             break;

            case 2:{
             ret = pop(stack);
             printf("%d is popped\n",ret);
            }
            break;
            case 3:
             peek(stack);
             break;
        }
        getchar();
        printf("do u want to continue\n");
        scanf("%c",&choice);


    }while(choice == 'y' || choice == 'Y');
    
}