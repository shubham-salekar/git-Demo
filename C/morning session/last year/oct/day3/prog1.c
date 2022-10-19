/*
	2 
	3 4 
	4 5 6 
	5 6 7 8 
*/	
#include<stdio.h>

void main(){

	int row;
	printf("enter size of rows\n");
	scanf("%d",&row);

	int var1 ;

	for(int i = 1; i<=row ; i++){
	
		var1 = 1+i;

		for(int j = 1 ; j<=i ; j++){
		
			printf("%d ",var1);
			var1++;
		}
		printf("\n");
	
	}


}
