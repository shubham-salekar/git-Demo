#include<stdio.h>

size_t fact = 1;

int factorial(int n){

	if(n==1){
	
		return fact;
	}
	fact = fact*n;
	return factorial(--n);
}
void main(){

	size_t ret = factorial(19);
	printf("factorial of num is : %ld\n",ret);
}
