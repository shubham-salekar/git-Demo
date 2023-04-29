// fibanocci series

#include<stdio.h>

int fib(int n){
	
	int a = 0;
	int b = 1;
	
	while(n){
	
		printf("%d ",a);
		int c = a+b;
		a=b;
		b=c;

		n--;
	}
	
}
void main(){

	fib(8);
}
