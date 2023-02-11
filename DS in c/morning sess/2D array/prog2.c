
#include<stdio.h>

void rowsum(int row,int col,int arr1[row][col],int arr2[]){

	
	for(int i=0 ; i<row ; i++){
	
		int sum = 0;
		for(int j=0 ; j<col ; j++)
			sum = sum+arr1[i][j];

		arr2[i] = sum;
	}

}
void main(){

	int row,col;
	printf("enter array size\n");
	scanf("%d%d",&row,&col);

	int arr1[row][col];

	printf("Enter array element\n");

	for(int i=0 ; i<row ; i++){
	
		for(int j=0 ; j<col ; j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	int arr2[row];

	rowsum(row,col,arr1,arr2);

	printf("array of row sum\n");

	for(int i=0 ; i<row ; i++){
	
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
