
#include<stdio.h>

void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array elements:\n");
	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	
	}
	int evenc = 0;
	int oddc = 0;

	for(int i = 0; i<size ; i++){
	
		if(arr[i]%2 == 0){
		
			evenc++;
		}else{
		
			oddc++;
		}
	
	}
	printf("count of even element is %d\n",evenc);
	printf("odd count %d\n",oddc);
}


