
// finding minimun number and put it into index 0 and return arr[0]

#include<stdio.h>

int mindemo(int arr[],int size){

	int min = 0; 
 
	int i;
	for(i=1 ; i<size ; i++){
	
		if(arr[i] < arr[min])
			min = i;
	}
	int temp = arr[0];
	arr[0] = arr[min];
	arr[i] = temp;

	return arr[0];
}
void main(){

	int size;
	printf("Enter size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int min = mindemo(arr,size);
	printf("minimum = %d\n",min);
}
