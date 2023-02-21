
#include<stdio.h>

void prefixsum(int arr[],int size,int q){

	int prefix[size];

	prefix[0] = arr[0];
	for(int i=1 ; i<size ; i++ ){
	
		prefix[i] = prefix[i-1] + arr[i];
	}

	for(int i=0 ; i<q ; i++){
	
		int start,end;
		printf("Enter start and end\n");
		scanf("%d%d",&start,&end);
		
		if(start<= -1 || end>size){
		
			printf("invalid range enter range between 0 to %d\n",size-1);
			i--;
		}else{

			int sum = 0;
			if(start == 0)
				printf("Sum = %d\n",prefix[end]);
			else{
				sum = prefix[end] - prefix[start-1];
				printf("Sum = %d\n",sum);
			}
		}
	}

}

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}

	int q;
	printf("enter query number\n");
	scanf("%d",&q);

	prefixsum(arr,size,q);


}
