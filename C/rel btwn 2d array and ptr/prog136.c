
#include<stdio.h>

void main(){

	int row, col;
	printf("Enter no. of rows and cols\n");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	int sum = 0;
	printf("Enter array elements\n");

	for(int i = 0; i<row ; i++){
	
		for(int j = 0; j<col ; j++){
		
			scanf("%d",&arr[i][j]);
			sum = sum +arr[i][j];
		}
	}
	printf("array elements are\n");
	for (int i=0 ; i<row ; i++) {
		for (int j=0 ; j<col ; j++) {
			printf("%d ",arr[i][j]) ;
		}
		printf("\n") ;
	}

	printf("Sum of elements in array is %d\n",sum) ;
}
