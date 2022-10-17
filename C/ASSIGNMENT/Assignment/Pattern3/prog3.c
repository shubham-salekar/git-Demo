/*

   	4 a 3 b
   	4 a 3 b
   	4 a 3 b
   	4 a 3 b

 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	for (int i = 1 ; i<=x ; i++){
	
		int var1 = 4 ;
		char var2 = 'a';

		for(int j = 1 ; j<=x ; j++){
		
			if(j%2 == 1){

				printf("%d ",var1);
				var1--;

			}else{

				printf("%c ",var2);
				var2++;
			
			}
		}
		printf("\n");
	
	}

}
