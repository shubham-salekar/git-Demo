/*
	9. Create a 2D array and take the input of elements from the user & Print using a pointer.
	Draw a correct diagram and Write the output
*/

#include<stdio.h>

void main(){

	int row,col;
	printf("Enter no.of rows and columns\n");
	scanf("%d%d",&row,&col);

	int arr[row][col];

	printf("Enter array elements\n");

	for(int i=0 ; i<row ; i++){
	
		for(int j=0 ; j<col ; j++){
		
			scanf("%d",&arr[i][j]);
		}
	}
	printf("array elements are:\n");
	for(int i=0 ; i<row ; i++){
	
		for(int j=0 ; j<col ; j++){
		
			printf("%d ",*(*(arr+i)+j));
		}
		printf("\n");
	}

}
