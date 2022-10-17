/*
	0 1 1 2
	3 5 8 13
	21 34 55 89
	144 233 377 610


 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	int n1 = 0;
	int n2 = 1;
	int temp;

	for (int i = 1 ; i<=x ; i++){

		for(int j = 1 ; j<=x ; j++){
			
			printf("%d ",n1);	//0	1	1	2
							
			temp = n1 ;		//0	1	1	2

			n1=n1 + n2;		//1	1	2	3

			n2 = temp;		//0	1	1	2

		
		}
		printf("\n");
	
	}

}
