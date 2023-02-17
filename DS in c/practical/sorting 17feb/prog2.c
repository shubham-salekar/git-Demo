
#include<stdio.h>

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int sum;
	printf("enter sum\n");
	scanf("%d",&sum);

	int arr[size];

	printf("enter array elements\n");

	for(int i=0 ; i<size ;i++){
	
		scanf("%d",&arr[i]);
	}
	
	for(int i=0 ; i<size ; i++){
		int sum1 = 0;
		sum1 = sum1 +arr[i];

		for(int j=i+1 ; j<size ; j++){
		
			sum1 = sum1 + arr[j];
			
			if(sum1 == sum){
				printf("sum found between %d and %d\n",i,j);
				break;
			}
			if(sum1 > sum)
				break;	
		}
	}
}
