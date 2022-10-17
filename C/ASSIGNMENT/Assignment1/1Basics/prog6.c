//prog 6 : print the reverse numbers 100 - 1


#include<stdio.h>

void main(){

	int x, y;

	printf("Enter num1:\n");
	scanf(" %d",&x);
	
	printf("Enter num2:\n");
	scanf(" %d",&y);
	
	printf("even numbers from 1 -100 :\n");

	for (int i=x; i>=y ; i--){

		printf("%d\n",i);		
	}


}
