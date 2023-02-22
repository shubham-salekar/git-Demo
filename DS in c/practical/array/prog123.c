
// prefix array demo(without prefix approach)

#include<stdio.h>

int sum_in_range(int arr[],int q,int qarr[][2],int size,int sumarr[]){

	for(int i=0 ;i<q ; i++){
		
		int start,end;
		for(int k=0 ; k<2 ; k++){
		
			start = qarr[i][k];
			end = qarr[i][k+1];
			break;
		}
		
		int sum = 0;
		for(int j = start; j<=end ; j++){
		
			sum = sum + arr[j];
		}
		sumarr[i] = sum;
		
	}

}
void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter array elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int q;
	printf("Enter number of Queries\n");
	scanf("%d",&q);

	int sumarr[q];

	printf("Enter query array 2D\n");
	int qarr[q][2];

	for(int i=0 ; i<q ; i++){
	
		for(int j=0 ; j<2 ; j++){
		
			scanf("%d",&qarr[i][j]);
		}
	}
	sum_in_range(arr,q,qarr,size,sumarr);

	printf("Array after finding sum in range\n");
	for(int i=0 ; i<q ; i++){
	
		printf("%d ",sumarr[i]);
	}
	printf("\n");

}
