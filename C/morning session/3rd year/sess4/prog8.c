/*
Enter num of rows 
4

D C B A 
C B A 
B A 
A 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		char ch = 'A'+row-i;

		for(int j=1 ; j<=row-i+1 ; j++){
		
			printf("%c ",ch--);
		}

		printf("\n");

	}
}
