
#include<stdio.h>

int flag = 0;
void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("enter array elements\n");

	for(int i=0 ; i<size ;i++){
	
		scanf("%d",&arr[i]);
	}
	
	for(int i=1 ; i<size ; i++){
		
		int store = arr[i];

		int j;
		for(j=i-1 ; j>=0 ; j--){
		
			if(store%2 == 0 && arr[j]%2 == 0){
				
				flag = 0;		
				if(store%5 == 0 && arr[j]%5 == 0){
					
					flag = 0;
					if(store > arr[j]){
					
						arr[j+1] = arr[j];
					}else{
					
						break;
					}
				}
				else if(store%5 == 0 && arr[j]%5 != 0){
				
					flag = 0;
					arr[j+1] = arr[j];
				}
				else{
				
					flag = 1;
				}

			}else if(store%2 == 0 && arr[j]%2 != 0){
			
				flag = 0;
				arr[j+1] = arr[j];
			}
			else if(store%2 != 0 && arr[j]%2 == 0){
			
				flag = 1;
			}			
		}
		if(flag == 0) 
			arr[j+1] = store;

		for(int k=0 ; k<size ;k++){
	
			printf("%d ",arr[k]);
		}
		printf("\n");
	}
	printf("sorted array elements\n");

	for(int i=0 ; i<size ;i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
