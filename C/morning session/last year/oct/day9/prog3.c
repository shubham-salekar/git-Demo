/*
	1 
	3 1 
	5 3 1 
	7 5 3 1 
	5 3 1 
	3 1 
	1 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = 1;
	int num = row-2;

	for(int i=1 ; i<=row ; i++){
	
		if(i<=row/2+1){
		
			var1 = i*2-1;

			for(int j=1 ; j<=i ; j++){
		
				printf("%d ",var1);
				var1-=2;
			}
		}
		else{
		
			int var1 = num;	
			for(int k=i ; k<=row ; k++){
		
				printf("%d ",var1);
				var1-=2;;
			}
			num -=2;
			
				
		}
		printf("\n");
	}
}
