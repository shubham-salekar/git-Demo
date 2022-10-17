/*
	D4 C3 B2 A1
	D4 C3 B2 A1
	D4 C3 B2 A1
	D4 C3 B2 A1
*/



#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);




	for(int i = 1; i<=x ; i++){
		
		int var1 = 4;
		char var2 = 'D';
	
		for(int j = 1 ; j<=x ; j++){
		
			printf("%c%d ",var2,var1);
			var2--;
			var1--;
		
		}
		printf("\n");
		
	
	}

}
