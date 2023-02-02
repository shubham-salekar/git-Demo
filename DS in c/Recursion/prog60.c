
#include<stdio.h>

int factorial(int n){

	if(n==2){
	
		return 2;
	}
	return factorial(n-1) * n;

}
void main(){

	int fact = factorial(5);
	printf("factorial is %d\n",fact);
}
