/*
	ABC
	DEF
	GHI
*/


#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	char var1 = 'A';
	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
		
			printf("%c ",var1);
			var1++;
		
		}
		printf("\n");
	
	}

}
