/*

1 2 3 4 3 2 1 
  2 3 4 3 2 
    3 4 3 
      4 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		int num = i;

		for(int k=1 ; k<=row*2-i*2+1 ; k++){
		
			if(k<row-i+1){
			
				printf("%d ",num);
				num++;

			}else{
			
				printf("%d ",num);
				num--;
			}
		}
		printf("\n");
	}
}
