/*
Enter num of rows 
4

a 
b c 
d e f 
g h i j 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	char ch = 'a';

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=i ; j++){
		
			printf("%c ",ch++);
		}
		printf("\n");
	}
}
