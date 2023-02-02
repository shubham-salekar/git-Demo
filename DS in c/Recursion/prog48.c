#include<stdio.h>

void fun(int n){

	printf("%d ",n);

	if(n!=1){
	
		fun(--n);
	}
    
}
void main(){

    fun(10);
}
