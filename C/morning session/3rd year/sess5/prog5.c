/*
	Enter number of rows
	4
	         D  
	      c  D  
	   B  c  D  
	a  B  c  D  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		char ch = 'a'+ row-i;

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=i ; k++){
		
			if((k+i)%2 == 0){

				printf("%c  ",ch-32);
				ch++;
			}
			else{
				printf("%c  ",ch++);
			}
		}
		printf("\n");
	}
}
