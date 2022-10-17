
/*
 * 	18 16 14
 * 	12 10 8
 * 	6 4 2
 *
 */

#include<stdio.h>
void main(){
	int x;
	printf("enter no of row:");
	scanf("%d",&x);

	int var1 = 18;


	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
				
			printf("%d ",var1);
			var1-=2;

		}
		printf("\n");
	}


}
