/*
 * 	      1
 *          1 2
 *        1 2 3
 *      1 2 3 4    
 */

#include<stdio.h>
void main(){

	int row;

	printf("enter a row :\n");
	scanf("%d",&row);

	
	for(int i = 1; i<= row ; i++){
	
		for(int j = row ; j>i ; j--){

			printf("  ");
		}
		int var1 = 1;

		for(int k = 1 ; k<=i ; k++){

			printf("%d ",var1);
			var1++;
		
		}
		printf("\n");	
	
	}


}

