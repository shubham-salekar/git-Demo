/*
0 0 0 0 0 
  1 2 3 4 
    4 6 8 
      9 12 
        16
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = 0;
	int diff = 1;

	for(int i=0 ; i<row ; i++){
	
		int var2 = var1;
		for(int j=0 ; j<i ; j++){
		
			printf("  ");
		}
		for(int k =row ; k>i ; k--){
		
			printf("%d ",var2);
			var2 +=i;

		}
		var1 = var1+diff;
		diff+=2;
		printf("\n");
	}
}
