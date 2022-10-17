/*
	1 4 3
	16 5 36
	7 64 9	
   	

 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	int var1 = 1;

	for (int i = 1 ; i<=x ; i++){

		for(int j = 1 ; j<=x ; j++){
		
			if((i+j) %2 == 1){
			
				printf("%d ",var1*var1);
			}else{
			
				printf("%d ",var1);
			}
			var1++;
		
		}
		printf("\n");
	
	}

}
