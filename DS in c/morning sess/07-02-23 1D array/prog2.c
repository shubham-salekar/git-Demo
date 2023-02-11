// good pair

#include<stdio.h>

int goodpair(int arr[],int size,int b){

	for(int i=0 ; i<size ; i++){
	
		for(int j=i ; j<size ; j++){
		
			if(i!=j && (arr[i]+arr[j] == b))
				return 1;
		}
	}
	return 0;

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

	int ret = goodpair(arr,size,num);
	
	if(ret == 1)
		printf("good pair is present\n");
	else
		printf("good pair not present\n");

}
