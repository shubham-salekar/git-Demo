/*
	ABCD
	BCDF
	CDEF
	DEFG
*/


#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	char var1 = 'A';
	for(int i = 0; i<x ; i++){
	
		char var2 = var1+i;

		for(int j = 1 ; j<=x ; j++){
		
			printf("%c ",var2);
			var2++;
		}
		printf("\n");
	
	
	}

}
