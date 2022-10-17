
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int num = 1;
	int iteration = row-2;

	for(int i=1 ; i<=row ; i++){
	
		if(i<=row/2+1){
		
			int var = i;

			for(int j=row/2 ; j>=i ; j--){
			
				printf("  ");
			}
			
			for(int k= 1 ; k<=2*i-1 ; k++){
			
				if(i>k){
				
					printf("%d ",var);
					var++;
				}else{
				
					printf("%d ",var);
					var--;
				}
			}

		}else{
			for(int j=1 ; j<=num ; j++){
			
				printf("  ");
			}
			for(int k=1 ; k<=iteration ; k++){
			


			}
		
		}
		
		printf("\n");
				
	}
}
