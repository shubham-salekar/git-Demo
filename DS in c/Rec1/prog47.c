#include<stdio.h>

void fun(int n){

    for(int i=n ; i>=0 ; i--){

        printf("%d\n",i);
    }
   
}
void main(){

    fun(10);
}