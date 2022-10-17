/*
	1 
	1 4 
	4 7 10 
	10 13 16 19 
	19 22 25 
	25 28 
	28 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows");
	scanf("%d",&row);

	int var1=1;

	for(int i=1 ; i<=row ; i++){
	
		if(i<=row/2+1){
		
			for(int j = 1; j<=i ; j++){
			
				printf("%d ",var1);
				var1+=3;
			}
			var1 = var1-3;
		}
		else{
		
			for(int k=i ; k<=row ;k++){
			
				printf("%d ",var1);
				var1+=3;
			}
			var1 = var1-3;
		}
		printf("\n");
	}
}
