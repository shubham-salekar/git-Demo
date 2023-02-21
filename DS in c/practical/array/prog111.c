
#include<stdio.h>

int totalcount(int arr[],int size){

	int max = arr[0];
	int max2 = arr[0];

	int count = 0;
	for(int i=0 ; i<size ; i++){

		if(arr[i] >= max){

			max = arr[i];
			if(max != max2)
				count = 0;

			if(arr[i] == max)
				count++;
			
			max2 = arr[i];
		}
		
	}
	printf("max = %d\n",max);
	printf("count = %d\n",count);
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
