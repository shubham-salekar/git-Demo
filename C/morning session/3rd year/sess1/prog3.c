/*

Enter num of rows 
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ; j++){
		
			printf("* ");
		}
		printf("\n");
	}
}
