/*
	a 
	A B 
	a b c 
	A B C D 
	a b c d e 
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rowws\n");
	scanf("%d",&row);

	int ch1 = 'A';

	for(int i = 1; i<=row ; i++){
	
		for(int j = 1 ; j<=i ; j++){
		
			if(i%2 == 1){
			
				printf("%c ",ch1+32);
				ch1++;
			
			}else{
			
				printf("%c ",ch1);
				ch1++;
			
			}
		
		}
		printf("\n");
		ch1 = 'A';
	}
}
