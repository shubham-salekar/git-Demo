Enter num of rows 
3
9 64 7 
36 5 16 
3 4 1 

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	int num = row*row;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ; j++){
		
			if(num % 2 ==0){
			
				printf("%d ",num*num);
				num--;

			}else{
			
				printf("%d ",num);
				num--;
			}
		}
		printf("\n");
	}
}
