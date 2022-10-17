/*
    1 2 3
    a b c
    1 2 3 
    a b c
 */




#include<stdio.h>

void main(){

	int x;
	printf("enter no of rows:\n");
	scanf("%d",&x);

	for (int i = 1; i<=x ; i++){
		
		int var1 = 1;
		char var2 = 'a';
	
		for(int j = 1 ; j<= 3 ; j++){
		
			if(i%2 != 0){
			
				printf("%d ",var1);
				var1++;
			
			}else if(i%2 == 0) {
			
				printf("%c ",var2);
				var2++;
			}
		
		}
		printf("\n");

	
	}
}
