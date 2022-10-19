// wap to print whether the given no is prime or not

#include<stdio.h>
void main(){

	int num;
	printf("Enter row size\n");
	scanf("%d",&num);

	int count = 0;

	for(int i = 1 ; i<=num ; i++){
	
		if(num%i == 0){
		
			count++;
		}
	
	}
	if(count == 2){
	
		printf(" prime num\n");
	}else{
	
		printf(" not prime num\n");
	}
}
