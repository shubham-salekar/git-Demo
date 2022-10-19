/*

 * * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		for(int k=1 ; k<=row*2-i*2+1 ; k++){
		
			printf("* ");
		}
		printf("\n");
	}
}
