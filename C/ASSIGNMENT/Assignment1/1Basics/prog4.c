//prog 4 : print the even numbers 1 - 100


#include<stdio.h>

void main(){

	int x;

	printf("Enter first num:\n");
	scanf(" %d",&x);
	
	printf("even numbers from 1 -100 :\n");

	for (int i=1; i<=100 ; i++){
	
		if(i%2 == 0){
		
			printf("%d\n",i);
		
		}
		
	}

}
