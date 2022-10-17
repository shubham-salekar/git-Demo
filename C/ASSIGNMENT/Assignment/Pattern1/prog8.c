/*
	1 3 5
	7 9 11
	13 15 17
*/



#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	int var1 = 1;
	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
		
			printf("%d ",var1);
			var1+=2;
		
		}
		printf("\n");

	
	}

}
