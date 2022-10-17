
#include<stdio.h>

int diagonalSum1(int (*ptr)[3], int rowSize , int colSize){		//(*ptr)[][3]

	int sum = 0;
	for(int i = 0; i<rowSize ; i++){
	
		for(int j = 0 ; j<colSize ; j++){
		
			if(i==j){
			
				sum = sum + (*(*ptr+i)+j);		// *(*(*ptr+i)+j)
			}
		}
	}
	return sum;
}
int diagonalSum2(int (*ptr)[],int arrSize){

	int sum = 0;
	for(int i=0 ; i<arrSize ; i++){
	
		if(i%4 == 0){
		
			sum = sum + *(*ptr+i);
		}
	}
	return sum;
}

void main(){

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int arrSize = sizeof(arr)/sizeof(int);

	int sum1 = diagonalSum1(arr,3,3);				//&arr
	printf("digonalSum 1 = %d\n",sum1);
	
	int sum2 = diagonalSum2(arr,arrSize);
	printf("digonalSum 2 = %d\n",sum2);


}
