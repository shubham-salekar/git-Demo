
#include<stdio.h>

void main(){

	int num;
	printf("Enter number\n");
	scanf("%d",&num);

	int fact = 1;

	for(int i=num ; i>=1 ; i--){
	
		fact = fact*i;

	}
	printf("factorial of %d is %d \n",num,fact);


}
