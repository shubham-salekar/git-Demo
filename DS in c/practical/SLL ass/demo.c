#include<stdio.h>

void main(){

    int num1 = 30;
    int count = 2;
    for(int i=2 ; i<=(num1/2) ; i++){

        if(num1%i == 0){

            count++;
        }
    }
   
    printf("count = %d\n",count);
   
    if(count == 2){
        printf("%d is prime\n",num1);
    }else{
        printf("not prime\n");
    }
}