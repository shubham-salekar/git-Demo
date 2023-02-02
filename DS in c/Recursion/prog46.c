#include<stdio.h>

int x = 0;
void fun(){
    
    printf("%d ",++x);
    fun();
}
void main(){

    fun();
}