/*
 * 	* - - -
 * 	- * - -
 * 	- - * -
 * 	- - - *
 *
 */

#include<stdio.h>
void main(){

	int row;
	printf("enter a row :\n");
	scanf("%d",&row);

	
	for(int i = 1; i<= row ; i++){
	
		for(int j = 1 ; j<= row ; j++){

			if(i==j){
			
				printf("* ");
			
			}else{
			
				printf("- ");
			
			}

		
		}
		printf("\n");	
	
	}


}

