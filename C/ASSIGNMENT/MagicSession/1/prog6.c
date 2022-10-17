/*
 * 	D e F g
 * 	e D c B
 * 	F g H i
 * 	g F e D
 */

#include<stdio.h>
void main(){

	int row;
	printf("enter a row :\n");
	scanf("%d",&row);

	char ch1 = 'A';

	for(int i = 1; i<= row ; i++){
	
		ch1 = ch1 +i -1;

		for(int j = 1 ; j<= row ; j++){

			if(i%2 == 1){
				
				if((i+j)%2 == 0){
				
					printf("%c ",ch1+3);
				

				
				}else if((i+j)%2 == 1){
				
					printf("%c ",ch1+35+i-1);
					
				
				}
				ch1++;
			}

		
		}
		ch1 = 'A';
		printf("\n");

	}
}

