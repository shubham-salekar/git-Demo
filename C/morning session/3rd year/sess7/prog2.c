/*
Enter number of rows
4
         4  
      3  3  3  
   2  2  2  2  2  
1  1  1  1  1  1  1  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int num = row;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<= i*2-1 ; k++){
		
			printf("%d  ",num);
		}
		printf("\n");
		num--;
	}
}
