/*

1 2 3 4 5 4 3 2 1 
  1 2 3 4 3 2 1 
    1 2 3 2 1 
      1 2 1 
        1 
	 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);
	
	int num;
	int iteration = row;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		num = 1;

		for(int k = row*2-i*2+1 ; k>=1 ; k--){
		
			if(k>=iteration){
			
				printf("%d ",num);
				num++;
			}else{
			
				printf("%d ",k);
			}
			
		}
		iteration--;
		printf("\n");
	}
}
