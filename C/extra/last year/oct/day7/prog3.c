/*
      1 
    1 2 3 
  1 2 3 4 5 
1 2 3 4 5 6 7 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		int var1 = 1;

		for(int j=row-1 ; j>=i ; j--){
		
			printf("  ");
		}
		for(int k=1 ; k<=(i+i-1) ; k++){
		
			printf("%d ",var1);
			var1++;
		}
		printf("\n");
	}

}
