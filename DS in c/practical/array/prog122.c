
// prefix array demo(without prefix approach)

#include<stdio.h>

int even_in_range(int arr[],int q,int qarr[][2],int size,int evenarr[]){

	for(int i=0 ;i<q ; i++){
		
		int start,end;
		for(int k=0 ; k<2 ; k++){
		
			start = qarr[i][k];
			end = qarr[i][k+1];
			break;
		}
		
		int count = 0;
		for(int j = start; j<=end ; j++){
		
			if(arr[j] % 2 == 0){
			
				count++;
			}
		}
		evenarr[i] = count;
		
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

	int evenarr[q];

	printf("Enter query array 2D\n");
	int qarr[q][2];

	for(int i=0 ; i<q ; i++){
	
		for(int j=0 ; j<2 ; j++){
		
			scanf("%d",&qarr[i][j]);
		}
	}
	even_in_range(arr,q,qarr,size,evenarr);

	printf("Array after finding count of even in range\n");
	for(int i=0 ; i<q ; i++){
	
		printf("%d ",evenarr[i]);
	}
	printf("\n");

}
