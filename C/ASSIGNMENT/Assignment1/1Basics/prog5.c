//prog 5 : print the ascii values 1 to 127


#include<stdio.h>

void main(){

	int x;

	printf("Enter first num:\n");
	scanf(" %d",&x);
	
	printf("ascii values from 1 to 127 :\n");

	for (int i=0; i<=127 ; i++){
	
		printf(" %c = %d\n",i,i);
		
	}

}
