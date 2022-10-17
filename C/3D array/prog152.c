
#include<stdio.h>
void main(){

	int arr[2][3][3];
	
	printf("Array elements are\n");

	for(int i=0 ; i<2 ; i++){
	
		for(int j=0 ; j<3 ; j++){
		
			for(int k=0 ; k<3; k++){
			
				scanf("%d",&arr[i][j][k]);
			}
		}
	}
	int sum = 0;

	for(int i=0 ; i<2 ; i++){
	
		for(int j=0 ; j<3 ; j++){
		
			for(int k=0 ; k<3; k++){
			
				if(j==0){
					
					sum = sum + arr[i][j][k];
				}
			}
		}
	}
	printf("sum of 1st rows of 2 planes are:%d\n",sum);
}
