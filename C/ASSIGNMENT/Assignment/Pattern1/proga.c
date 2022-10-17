
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size:");
	scanf("%d",&row);

	int x = 2;
	int diff = 3;

	for(int i = 1 ; i<=row ; i++){
	
		for(int j = 1 ; j<=row ; j++ ){	
	
			printf("%d ",x);
			x= x + diff;

			diff = diff + 2 ;
		}
		printf("\n");
	
	}

}
