#include<stdio.h>

int count = 0;
int cntele(int arr[] , int size){

	for(int i=0 ; i<size ; i++){
	
		for(int j=0 ; j<size ; j++){
		
			if(arr[j] > arr[i]){
			
				count++;
				break;
			}
		}
	}
	return count;
}

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("enter array elements\n");

	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int ret = cntele(arr,size);
	
	if(count != 0)
		printf("count of elements = %d\n",ret);
	else
		printf("count of elements = %d\n",ret);

}
