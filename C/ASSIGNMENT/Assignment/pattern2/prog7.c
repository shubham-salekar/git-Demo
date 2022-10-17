/*
 *  1 2 3 4
 *  25 36 49 64 
 *  9 10 11 12
 *  169 196 225 256
 *
 */

#include<stdio.h>
void main(){
	int x;
	printf("enter no of row:");
	scanf("%d",&x);

	int var1 = 1;


	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
			if(i%2==1){
				
				printf("%d ",var1);
				var1++;
			}
			else if(i%2 == 0){
			
				printf("%d ",var1 * var1);
				var1++;
			
			}

		}
		printf("\n");
	}


}
