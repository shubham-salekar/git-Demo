/*
                1 
            3 2 1 
        5 4 3 2 1 
    7 6 5 4 3 2 1 
9 8 7 6 5 4 3 2 1       
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int num = 2;
	for(int i=1 ; i<=row ; i++){
	
		int var1 = i*2-1;
		int var2 = var1; 

		for(int j=(row*2-i) ; j>i ; j--){
		
			printf("  ");
		}
		for(int k=1 ; k<=var2 ; k++){
		
			printf("%d ",var1);
			var1--;
		}
		num+=2;
		printf("\n");
	}

}
