#include<stdio.h>

int fact =1;

int factorial(int n){

	for(int i=n ; i>=1 ; i--){
	
		fact = fact*i;
	}
	printf("factorial = %d\n",fact);
}
void main(){

	factorial(5);
}
