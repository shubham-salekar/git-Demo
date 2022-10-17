
/* 
	4 4 4 4
	3 3 3 3
	2 2 2 2
	1 1 1 1




 */

#include<stdio.h>

void main(){

	int x;
	int var1 = 4;

	printf("enter no. of rows:\n");
	scanf("%d" ,&x);

	for(int i = 0 ; i<= x ; i++){
	
		for(int j = 0 ; j<= x ; j++){
		
			printf("%d ",var1);

		
		}
		printf("\n");
		var1--;

	
		


	}


}

