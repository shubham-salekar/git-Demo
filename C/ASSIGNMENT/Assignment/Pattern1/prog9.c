/*
	2 5 10 
	17 26 37
	50 65 82
*/



#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	int var1 = 1;
	int gap = 1;
	for(int i = 1; i<=x ; i++){

		for(int j = 1 ; j<=x ; j++){
			
			var1 = var1 + gap;
			
			printf("%d ",var1);

			gap = gap+2;
		
		}
		printf("\n");

	
	}

}
