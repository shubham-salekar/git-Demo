/*
	1 2 9 4
	25 6 49 8
	81 10 121 12
	169 14 225 16
*/



#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	int var1 = 1;
	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
		
			if(var1%2 == 1){
			
				printf("%d ", var1 * var1);
				
			
			}else {
			
				printf("%d ",var1);
			
			}
			var1++;
		
		}
		printf("\n");

	
	}

}
