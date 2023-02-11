
#include<stdio.h>

void colsum(int row,int col,int arr1[row][col],int arr2[col]){

	
	for(int i=0 ; i<col ; i++){
	
		int sum = 0;
		for(int j=0 ; j<row ; j++)
			sum = sum+arr1[j][i];

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
	int arr2[col];

	colsum(row,col,arr1,arr2);

	printf("array of column sum\n");

	for(int i=0 ; i<col ; i++){
	
		printf("%d ",arr2[i]);
	}
	printf("\n");
}
