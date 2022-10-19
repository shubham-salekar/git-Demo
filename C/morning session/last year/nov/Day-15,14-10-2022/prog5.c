/*
	# 
      * # * 
    * * # * * 
  * * * # * * * 
* * * * # * * * * 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	for(int i = 1; i<=row ; i++){
	
		for(int j= row-1 ; j>=i ; j--){
		
			printf("  ");
		}
		for(int k=1 ; k<=i*2-1 ; k++){
		
			if(i==k){
			
				printf("# ");
			}else{
			
				printf("* ");
			}

		}
		printf("\n");
	}
}
