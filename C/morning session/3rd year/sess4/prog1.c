/*

Enter num of rows 
4

1 2 3 4 
1 2 3 
1 2 
1 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		for(int j=1 ; j<=row-i+1 ; j++){
		
			printf("%d ",j);
		}

		printf("\n");

	}
}
