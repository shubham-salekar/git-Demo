/*
Enter number of rows
4
4  3  2  1  
   4  3  2  
      4  3  
         4  
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("   ");
		}
		for(int k=row ; k>=i ; k--){
		
			printf("%d  ",k);
		}
		printf("\n");
	}
}
