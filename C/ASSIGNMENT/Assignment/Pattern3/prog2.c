/*
 * 	3 b 1 d
 * 	a 2 c 0
 * 	3 b 1 d
 * 	a 2 c 0
 *
 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	for (int i = 1 ; i<=x ; i++){
	
		int var1 = 3;
		char var2 = 'a';

		for(int j = 1 ; j<=x ; j++){
			if( (i+j) %2 == 0){
			
				printf("%d ",var1);

			}else if((i+j) %2 == 1 ){
			
				printf("%c ",var2);
			}
			var1--;
			var2++;

		}
		printf("\n");
	
	}

}
