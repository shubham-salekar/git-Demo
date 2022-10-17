/*
	D C B A 
	c b a 
	B A 
	a 
 
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch1 = 'A';

	for(int i = 1; i<=row ; i++){
	
		ch1 = ch1 +row -i;

		for(int j = row ; j>=i ; j--){
		
			if(i%2 == 1){
			
				printf("%c ",ch1);
				ch1--;
			
			}else{
			
				printf("%c ",ch1+32);
				ch1--;
			
			}
		
		}
		printf("\n");
		ch1 = 'A';
	}
}
