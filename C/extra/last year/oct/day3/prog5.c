/*	
	1 4 7 10 
	7 10 13 16 
	13 16 19 22 
	19 22 25 28 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int var1 = 1;

	for(int i = 1 ; i<=row ; i++){
	
		for(int j = 1; j<=row ; j++){
		
			printf("%d ",var1);
			var1 += 3;
		}
		printf("\n");
		var1 = var1-6;
	}

}
