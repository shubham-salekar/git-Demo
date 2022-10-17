#include<stdio.h>
void main(){

	int row;
	printf("enter row size:\n");
	scanf("%d",&row);

	int var1 = 0 ; 
	int diff = 3;

	for(int i = 1 ; i<=row ; i++){
	
		for(int j = 1 ; j<=row ; j++){
		
			printf("%d ",var1);
			var1 = var1 + diff;
			diff = diff + 2;
		
		}
		printf("\n");
	}


}
