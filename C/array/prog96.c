
#include<stdio.h>

void main(){
	
		int arr1[3];
		arr1[0] = 10 ;
		arr1[1] = 20 ;
		arr1[2] = 30 ;

		for (int i = 0 ; i<3 ; i++){

			printf("%d\n",arr1[i]);
	
		}
		int arr2[3];

	//	arr2 = arr1 ;		error: assifnment to expression with array type
		
		for(int i = 0 ; i<3 ; i++){
		
			arr2[i] = arr1[i];
		
		}	
		
		printf("array 2:\n");

		for (int i = 0 ; i<3 ; i++){

			printf("%d\n",arr2[i]);
		}
	


}
