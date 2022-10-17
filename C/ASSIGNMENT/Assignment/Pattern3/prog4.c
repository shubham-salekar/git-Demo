/*

   	a B c D
	b C d E
	c D e F
	d E f G

 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	char var1 = 'a';
	
	for (int i = 0 ; i<x ; i++){

		var1 = var1 + i ;

		for(int j = 1 ; j<=x ; j++){
		
			if( j %2 == 1){
			
				printf("%c ",var1);
			
			}else if(j %2 == 0){
			
				printf("%c ",var1-32);
			}
			var1++;
		
		
		}
		var1 = 'a';

		printf("\n");
	
	}

}
