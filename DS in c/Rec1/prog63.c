#include<stdio.h>

int fun(int n){

    printf("%d\n",n);
    
    if(n<=1){
        return 1;
    }
    return fun(n-1) + fun(n-2);
}
void main(){

    int sum = fun(3);
    printf("sum = %d ",sum);
}
