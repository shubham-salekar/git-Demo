#include<stdio.h>

void fun(){
    
    static int x = 0;
    printf("%d ",++x);
    fun();
}
void main(){

    fun();
}