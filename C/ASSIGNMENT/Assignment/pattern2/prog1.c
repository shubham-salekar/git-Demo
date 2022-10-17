
/* 
 * 	4 3 2 1 
 * 	5 4 3 2
 * 	6 5 4 3
 * 	7 6 5 4
 *
 */

#include<stdio.h>

void main(){

	int x;
	int var1 = 4;

	printf("enter no. of rows:\n");
	scanf("%d" ,&x);

	for(int i = 0 ; i<= x ; i++){
	
		var1 = var1 + i;
		for(int j = 0 ; j<= x ; j++){
		
			printf("%d ",var1);
			var1--;
		
		}
		printf("\n");
		var1 = 4;
	
		


	}


}

