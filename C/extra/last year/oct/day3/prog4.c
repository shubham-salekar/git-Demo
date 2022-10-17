/*
 
 
 
 
*/	
#include<stdio.h>

void main(){

	int row;
	printf("enter size of rows\n");
	scanf("%d",&row);

	int var1 = row*row*row;

	int flag = 0;

	for(int i = 1; i<=var1 ; i++){		//i<var1
	
		int count = 0;

		for(int j = 1 ; j<=i ; j++){
		
			if(i%j == 0){
			
				count++;
			}
			
		}
		if(count == 2){			
		
			printf("%d ",i);
			flag++;
		}
		if(flag == row){
		
			flag = 0;
			printf("\n");
		}
		
	}	

}
