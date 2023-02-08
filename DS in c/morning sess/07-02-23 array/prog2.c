#include<stdio.h>

int goodpair(int arr[],int size,int b){


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
	int num;
	printf("enter terget number\n");
	scanf("%d",&num);

	int ret = cntele(arr,size,num);
	
	if(count != 0)
		printf("count of elements = %d\n",ret);
	else
		printf("count of elements = %d\n",ret);

}
