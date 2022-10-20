
// write function : left diagonal elements sum 

// incomplete

#include<stdio.h>

int diagonalsum(int (*ptr)[3][3] , int arrsize){

	int sum = 0;
	for(int i=0 ; i<arrsize ; i++){
	
		if(i%4 == 0 || i==9 || i==13 || i==17){
		
			sum = sum+ (*(*(*ptr+0)+0)+i);
		}
	}
	return sum;

}
void main(){

	int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};

	int arrsize = sizeof(arr)/sizeof(int);

//	diagonalsum(arr,arrsize);

	printf("%d\n",diagonalsum(arr,arrsize));
}

