/*
	5 4 3 2 1 
	D C B A 
	3 2 1 
	B A 
	1 
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int var1 = 1;
	int var2 = 'A';

	for(int i = 1; i<=row ; i++){
	
		var1 = var1+row-i;
		var2 = var2+row-i;

		for(int j = row; j>=i ; j--){
		
			if(i%2 == 1){
			
				printf("%d ",var1);
				var1--;
			
			}else if(i%2 == 0){
			
				printf("%c ",var2);
				var2--;
			
			}
		}
		var1 = 1;
		var2 = 'A';
		
		printf("\n");
	
	}
}
