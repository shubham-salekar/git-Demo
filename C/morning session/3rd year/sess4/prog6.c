/*

Enter num of rows 
5

1 2 3 4 5 
2 3 4 5 
3 4 5 
4 5 
5 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		int num = i;

		for(int j=1 ; j<=row-i+1 ; j++){
		
			printf("%d ",num++);
		}

		printf("\n");

	}
}
