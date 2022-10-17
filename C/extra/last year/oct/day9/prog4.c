/*

7 6 5 4 3 2 1 
  5 4 3 2 1 
    3 2 1 
      1 
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1;
	int num = row;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		
		var1 = num*2-1;

		for(int k=var1 ; k>=1 ; k--){
		
			printf("%d ",k);
			
		}
		num--;
		
		printf("\n");
	}
}
