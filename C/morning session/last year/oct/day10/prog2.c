/*
    1 
  3 1 
5 3 1 
  3 1 
    1
*/ 
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = 1;
	int var2 = row-2;
	int space = 1;

	for(int i=1 ;i<=row ; i++){
	
		if(i<=row/2+1){
		
			var1 = i*2-1;
			for(int j=row/2+1 ; j>i ; j--){
			
				printf("  ");
			}
			for(int k=1 ; k<=i ;k++){
			
				printf("%d ",var1);
				var1-=2;
			}
		}
		else{
		
			int var3 = var2;
			for(int j=1; j<=space ; j++){
			
				printf("  ");
			}
			for(int k=i ; k<=row ; k++){
			
				printf("%d ",var3);
				var3 -=2;
			}
			var2 = var2-2;
			space++;
		}
		printf("\n");
	}
}
