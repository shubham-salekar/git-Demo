/*
	1 
	3 2 1 
	5 4 3 2 1 
	3 2 1 
	1 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1;
	int num = row-2;

	for(int i=1 ; i<=row ; i++){
	
		if(i<= row/2+1){
		
			var1 = i*2-1;

			for(int j=1 ; j<=(i+i-1) ; j++){
		
				printf("%d ",var1);
				var1--;
			}
		}
		else{
		
			int var2 = num;
			for(int k=1 ; k<=num ; k++){
		
				printf("%d ",var2);
				var2--;
			}
			num-=2;	
		}
		printf("\n");
	}
}
