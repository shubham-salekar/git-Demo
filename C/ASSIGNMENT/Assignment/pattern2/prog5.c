
/* 
	D C B A
	e d c b
	F E D C
	g f e d
 */

#include<stdio.h>

void main(){

	int x;
	char var1 = 'D';
	char var2 = 'd';

	printf("enter no. of rows:\n");
	scanf("%d" ,&x);

	for(int i = 0 ; i<= x ; i++){
	
		var1 = var1 + i;
		var2 = var2 + i;
		
		for(int j = 0 ; j<= x ; j++){
		
			if(i%2==1){
			
				printf("%c ",var2);
				var2--;	

			}else if(i%2==0){
			
				printf("%c ",var1);
				var1--;
			
			}
		}
		var1 = 'D';
		var2 = 'd';


		printf("\n");
	
	}
}

