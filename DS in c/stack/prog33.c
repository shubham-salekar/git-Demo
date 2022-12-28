#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int top = -1;
int size = 0;
int flag = 0;

bool isFull(){

    if(top == size-1){
        return true;
    }else{
        return false;
    }

}
bool isEmpty(){

    if(top == -1){
        return true;
    }else{
        return false;
    }

}
int push(int stack[]){
    if(isFull()){
        return-1;
    }else{
        top++;
        printf("Enter data\n");
        scanf("%d",&stack[top]);

        return 0;
    }
}
int pop(int stack[]){
    if(isEmpty()){
        flag = 0;
        return -1;
    }else{

        int val = stack[top];
        top--;
        flag = 1;
        return val;
    }
}
int peek(int stack[]){

    if(isEmpty()){
        flag = 0;
        return -1;
    }else{

        int val = stack[top];
        flag = 1;
        return val;
    }
}
void main(){

    printf("Enter size of stack\n");
    scanf("%d", &size);

    int stack[size];

    char choice;

    do{

        printf("1.push\n 2.pop\n 3.peek\n 4.isEmpty\n 5.isFull\n");

        int ch;
        printf("Enter Choice\n");
        scanf("%d", &ch);

        switch(ch){

            case 1:{
                int ret;
                ret = push(stack);
                if(ret == -1){

                    printf("stack overflow\n");
                }
            }
            break;
            case 2:{
                int ret;
                ret = pop(stack);
                if(flag == 0){
                    printf("stack underflow\n");
                }else{
                    printf("%d is popped\n",ret);
                }
            }
            break;
            case 3:{
                int ret;
                ret = peek(stack);
                if(flag == 0)
                    printf("stack is empty\n");
                else
                    printf("%d",ret);
            }
            break;
            case 4:
            {
                bool ret = isEmpty();
                if(ret)
                    printf("stack is empty\n");
                else
                    printf("stack is not empty\n");
            }
            break;
            case 5:
            {
                bool ret = isFull();
                if(ret)
                    printf("stack is full\n");
                else
                    printf("stack is not full\n");
            }
            break;
            default:
                printf("invalid choice\n");
                break;
        }
        getchar();
        printf("Do u want to continue\n");
        scanf("%c",&choice);
    }while(choice=='y' || choice == 'Y');
}