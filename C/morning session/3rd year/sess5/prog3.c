/*	Enter number of rows
	4
        	 d  
	      c  c  
	   b  b  b  
	a  a  a  a  
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		char ch = row-i+'a';

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=i ; k++){
		
			printf("%c  ",ch);
		}
		printf("\n");
	}
}
