/*
Enter number of rows
4
1  2  3  4  
   1  2  3  
      1  2  
         1  

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
		for(int k=1 ; k<=row-i+1 ; k++){
		
			printf("%d  ",k);
		}
		printf("\n");
	}
}
