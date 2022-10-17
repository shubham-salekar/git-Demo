/*
 * 	E D C B A
 * 	E D C B
 * 	E D C 
 * 	E D
 * 	E
 */

#include<stdio.h>
void main(){

	int row;
	printf("enter a row :\n");
	scanf("%d",&row);

	char ch1 = 'A';
	
	for(int i = 1; i<= row ; i++){
	
		ch1 = ch1 + row -1;

		for(int j = row ; j>=i ; j--){
		
			printf("%c ",ch1);
			ch1--;	
		
		}
		ch1 = 'A';
		printf("\n");	
	
	}


}

