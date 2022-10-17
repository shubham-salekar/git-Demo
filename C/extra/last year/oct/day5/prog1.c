/*
A B C D 
  A B C 
    A B 
      A 
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i = 1 ; i<=row ; i++){
	
		char ch1 = 'A';

		for(int j = 1 ; j<i ; j++){
		
			printf("  ");
		}
		for(int k = row ; k>=i ; k--){
		
			printf("%c ",ch1);
			ch1++;
		}
		printf("\n");
	}
}
