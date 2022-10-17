/*
	10. Create a 3D array and take the input of elements from the user & Print using a pointer.
	Draw a correct diagram and Write the output
*/

#include<stdio.h>

void main(){

	int plane,row,col;
	printf("Enter no.of planes, rows and columns respectively\n");
	scanf("%d%d%d",&plane,&row,&col);

	int arr[plane][row][col];

	printf("Enter array elements\n");

	for(int i=0 ; i<plane ; i++){
	
		for(int j=0 ; j<row ; j++){

			for(int k=0 ; k<col ; k++){
		
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	printf("array elements are:\n");
	for(int i=0 ; i<plane ; i++){
	
		for(int j=0 ; j<row ; j++){

			for(int k=0 ; k<col ; k++){
		
				printf("%d ",*(*(*(arr+i)+j)+k));
			}
		
		}
		
	}

}
