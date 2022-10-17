/*
	16 15 14 13
	L K J I
	8 7 6 5
	D C B A

 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	int var1 = 1;
	char var2 = 'A';


	for (int i = 1 ; i<=x ; i++){

		for(int j = 1 ; j<=x ; j++){
		
			if(i%2 == 1){
			
				printf("%d ",var1+15);
			
			}else{
			
				printf("%c ",var2+15);
			}
			var1--;
			var2--;
		
		
		}
		printf("\n");
	
	}

}
