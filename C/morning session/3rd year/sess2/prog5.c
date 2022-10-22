/*
 *
Enter num of rows 
3

a B c 
D e F 
g H i 

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
			
				printf("%c ",ch+32);
				ch++;
			}else{
			
				printf("%c ",ch);
				ch++;
			}
		}
		printf("\n");
	}
}
