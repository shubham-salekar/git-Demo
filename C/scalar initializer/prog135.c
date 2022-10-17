
#include<stdio.h>
void main(){

	int arr[3][2];

	printf("Enter elements\n");

	for(int row = 0 ; row<3 ; row++){
	
		for(int col = 0 ; col<2 ; col++ ){
		
			scanf("%d",&arr[row][col]);
		}
	
	}
	for(int row = 0 ; row<3 ; row++){
	
		for(int col = 0 ; col<2; col++ ){
		
			printf("%d",arr[row][col]);
		}
		printf("\n");
	
	}
	printf("\n");
	for(int i = 0 ; i<6 ; i++){
	
		printf("%ld\n",arr[i]);
	
	}

}
