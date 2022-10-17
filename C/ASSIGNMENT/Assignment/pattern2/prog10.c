/*
 *	D4 C3 B2 A1
 *	A1 B2 C3 D4
 *	D4 C3 B2 A1
 *	A1 B2 C3 D4
 */	


#include<stdio.h>

void main(){

	int x;
	printf("enter num of rows:\n");
	scanf("%d",&x);
	
	for(int i = 1 ; i<=x ; i++){
		char var1 = 'D';
		char var3 = 'A';
		int var2 = 4;
	
		for(int j = 1 ; j<=x ; j++){
		
			if(i%2 == 1){
			
				printf("%c%d ",var1,var2);
				var1--;
				var2--;

			}else if(i%2 == 0){
			
				printf("%c%d ",var3,j);
				var3++;
				var1--;
			}
		
		}
		printf("\n");

	}




}
