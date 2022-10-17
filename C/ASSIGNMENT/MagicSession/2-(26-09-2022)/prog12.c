/*
	12. WAP to print addition of both diagonal elements using pointer without repeating the
	middle element
*/

#include<stdio.h>

void main(){

	int row,col;
	printf("Enter no.of rows and columns respectively\n");
	scanf("%d%d",&row,&col);

	int sum = 0;
	int arr[row][col];
	
	printf("Enter array elements\n");

	for(int i=0; i<row ; i++){
	
		for(int j=0 ; j<col ; j++){
		
			scanf("%d",&(*(*(arr+i)+j)));
		}
	}
	for(int i=0; i<row ; i++){
	
		for(int j=0 ; j<col ; j++){
		
			if(i==j){
			
				sum = sum+ *(*(arr+i)+j);
			}
			else if(i+j == row-1){
			
				sum = sum+ *(*(arr+i)+j);

			}
		}
	}
	printf("sum of diagonal elements is %d\n",sum);


}
