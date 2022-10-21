/*
 
Enter num of rows 
3

A b C 
d E f 
G h I 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	char ch = 'A';

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ; j++){
		
			if((i+j)%2 == 0){
			
				printf("%c ",ch);
				ch++;
			}else{
			
				printf("%c ",ch+32);
				ch++;
			}
		}
		printf("\n");
	}
}
