
#include<stdio.h>
void main(){

	int row;
	printf("enter row size\n");
	scanf("%d",&row);

	int n1 = 0;
	int n2 = 1;

	for(int i = 1 ;i<=row ; i++){
	
		for(int j = 1 ; j<=i ; j++){
		
			printf("%d ",n1);

			int temp = n1 ;

			n1 = n1 + n2;

			n2 = temp;
		
		}
		printf("\n");
	
	}

}
