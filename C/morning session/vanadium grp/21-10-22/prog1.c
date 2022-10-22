
// WAP to find minimum and maximum element in the arry

#include<stdio.h>

void main(){

	int arr[] = {80,20,100,40,9,70,90};

	int arrsize = sizeof(arr)/sizeof(int);

	int min = arr[0];
	int max = 0;

	for(int i=0 ; i<arrsize ; i++){
	
		if(arr[i]>max){
		
			max = arr[i];
		}
	}
	printf("maximum element in array is %d\n",max);

	for(int i=0 ; i<arrsize ; i++){
	
		if(arr[i]<min){
		
			min = arr[i];
		}
	}
	printf("minimum element in array is %d\n",min);

}
