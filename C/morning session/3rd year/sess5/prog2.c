/*
Enter number of rows
4
         4  
      4  3  
   4  3  2  
4  3  2  1  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		int num = row;

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=i ; k++){
		
			printf("%d  ",num);
			num--;
		}
		printf("\n");
	}
}
