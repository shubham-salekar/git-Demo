/*
	 D1 C2 B3 A4
	 e5 f4 g3 h2
	 F3 E4 D5 C6
	 g7 h6 i5 j4

 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	for (int i = 0 ; i<x ; i++){
	
		int var1 = 1;
		char var2 = 'A';

		for(int j = 0 ; j<x ; j++){
		
			if(i%2 == 1){
			
				
				printf("%c%d ",var2+i+32+3,var1+i+3);
				var1--;
				var2++;
			
			}else if(i%2 == 0){
			
				printf("%c%d ", var2+i+3,var1+i);
				var1++;
				var2--;
			
			}	
		
		
		}
		printf("\n");
	
	}

}
