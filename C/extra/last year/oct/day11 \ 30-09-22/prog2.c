/*
3 
2 3 
1 2 3 
0 1 2 3 
1 2 3 
2 3 
3 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = row/2;
	int var2 = 1;

	for(int i=1 ; i<=row ; i++){
	
		if(i<=row/2 +1){
		
			for(int j=1 ; j<=i ; j++){
			
				printf("%d ",var1);
				var1++;
			}
			var1 = var1-i-1;
		}
		else{
		
			int var3 = var2;
			for(int k=i ; k<=row ; k++){
			
				printf("%d ",var3);
				var3++;
			}
			var2++;
		}
		printf("\n");
	}
}
