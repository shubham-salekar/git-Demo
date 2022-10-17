
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int var1 = 1;

	for(int i = 1 ; i<=row ; i++){
	
		for(int j = 1 ; j<=i ; j++){
		
			printf("%d ",var1);
			var1 += 2;
		}
		printf("\n");
	
	}
}
