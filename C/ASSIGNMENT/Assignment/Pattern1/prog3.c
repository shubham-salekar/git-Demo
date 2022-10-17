/*	
	1111
	2222
	3333
	4444
*/



#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	int var1 = 1;
	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
		
			printf("%d ",var1);
		
		}
		printf("\n");
		var1++;
	
	}

}
