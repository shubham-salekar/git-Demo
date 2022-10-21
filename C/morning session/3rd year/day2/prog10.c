/*
Enter num of rows 
3

1 3 5 
5 7 9 
9 11 13 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	int num = 1;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ; j++){
		
			printf("%d ",num);
			num+=2;
		}
		num-=2;

		printf("\n");
	}
}
