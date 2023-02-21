
#include<stdio.h>

int totalcount(int arr[],int size){

	int max = arr[0];
	for(int i=0 ; i<size ; i++){

		if(arr[i] > max)
			max = arr[i];
		
	}
	printf("max = %d\n",max);
	int count = 0;
	for(int i=0 ; i<size ; i++){
	
		if(arr[i] == max)
			count++;
	}
	return size-count;
}
void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int ret = totalcount(arr,size);

	printf("count = %d\n",ret);
}
