/*
1 2 3 4 
4 1 2 3 
3 4 1 2 
2 3 4 1 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		int var1 = row-i+2;
		for(int j=1 ; j<i ; j++){
		
			printf("%d ",var1);
			var1++;
		}
		int var2 = 1;
		for(int k=row ; k>=i ; k--){
		
			printf("%d ",var2);
			var2++;
		}
		printf("\n");
	}
}
