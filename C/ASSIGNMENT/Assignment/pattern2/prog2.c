/*
	3 2 1 
	c b a 
	3 2 1 
	c b a

*/

#include<stdio.h>
void main(){

	int x;

	printf("enter no. of rows");
	scanf("%d",&x);

	for (int i = 1 ; i<=x ; i++){
		
		int var1 = 3;
		char var2 = 'c';
	
		for (int j = 1 ; j<=3 ; j++){
		
			if(i%2==1){
		
				printf("%d ",var1);
				var1--;
			}
			else if(i%2==0){
			
				printf("%c ",var2);
				var2--;
			
			}
		}
		printf("\n");
	
	}


}
