/*

Enter num of rows 
4

4 3 2 1 
4 3 2 
4 3 
4 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		for(int j=row ; j>=i ; j--){
		
			printf("%d ",j);
		}

		printf("\n");

	}
}
