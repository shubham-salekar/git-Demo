// factorial using recursion

#include<stdio.h>

int factorial(int n){

	if(n!=2){
	
		return n * factorial(n-1);
	}
	return 2;
}
void main(){

	int fact = factorial(5);
	printf("factorial = %d\n",fact);
}
