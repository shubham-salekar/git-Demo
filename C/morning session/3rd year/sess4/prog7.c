/*

Enter num of rows 
4

d d d d 
C C C 
b b 
A 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		char ch = 'a'+row-i;

		for(int j=row ; j>=i ; j--){
		
			if(i%2 == 1){
			
				printf("%c ",ch);
			}else{
			
				printf("%c ",ch-32);
			}
		}

		printf("\n");

	}
}
