
#include<stdio.h>

void main(){

	int num;
	printf("Enter num of row\n");
	scanf("%d",&num);

	int fact = 1;

	for(int i = 1; i<=num ; i++){
	
		fact = fact*i;
	
	}
	printf("factorial of %d is %d\n",num,fact);

}
