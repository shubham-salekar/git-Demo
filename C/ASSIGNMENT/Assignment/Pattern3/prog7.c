/*
	1 4 27
	4 27 16
	27 16 125

 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	int var1 = 1;

	for (int i = 0 ; i<x ; i++){
		
		var1 = var1 +i;

		for(int j = 0 ; j<x ; j++){
		
			if((i+j)%2 == 0){
			
				printf("%d ",var1*var1*var1);
			
			}else if((i+j)%2 == 1){
			
				printf("%d ",var1*var1);
			}
			var1++;
		
		
		}
		var1 = 1;
		printf("\n");
	
	}

}
