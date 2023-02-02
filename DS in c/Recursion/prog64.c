#include<stdio.h>

int fun(int n){

	if(n<=1){
	
		return 1;
	}
	return n+fun(n-1)+fun(n-2);
}
void main(){

	int sum = fun(4);
	printf("sum = %d\n",sum);
}
