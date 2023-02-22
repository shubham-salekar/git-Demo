
#include<stdio.h>

int count = 0;

int leader_ele(int arr[],int size,int leader_arr[]){

	for(int i=0 ; i<size ; i++){
	
		int max2 = arr[i];
		for(int j=i+1 ; j<size ; j++){
		
			if(arr[j] > max2){
			
				break;
			}
			if(j == size-1){
			
				leader_arr[count] = max2;
				count++;
			}
		}
		if(i == size-1){

			leader_arr[count] = max2;
			count++;
		}
		
	}
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
	int leader_arr[size];
	leader_ele(arr,size,leader_arr);
	
	printf("leader array\n");

	if(count != 0){

		for(int i=0 ; i<count ; i++ ){
	
			printf("%d ",leader_arr[i]);
		}
		printf("\n");
	}else
		printf("no leader element is present\n");
}



