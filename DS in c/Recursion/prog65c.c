// fibanocci series using recursion

#include<stdio.h>

size_t fib(int n){
	
	if(n==0){
	
		return 0;
	}
	if(n==1){
	
		return 1;
	}
	return fib(n-1)+fib(n-2);
	
}
void main(){

	int n;
	printf("Enter number\n");
	scanf("%d",&n);

	size_t fibo = fib(n-1);
	printf("fib = %ld\n",fibo);
}
