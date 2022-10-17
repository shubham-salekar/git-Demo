
/*
 	D D D D
	  C C C
	    B B 
	      A
*/

#include<stdio.h>
void main(){

	int row;
	printf("enter num of row:\n");
	scanf("%d",&row);

	for(int i= 1; i<=row ; i++){
	
		for(int j = 1 ; j<i ; j++){
		
			printf("  ");
		}
		char ch1 = 'A';

		for(int k = row ; k>=i ; k--){

			printf("%c ",ch1 + row -i);
			

		}
		printf("\n");
	
	}

}
