/*
Enter no. of rows
4
A0	B1	C2	D3	E4	F5	G6	
	H2	I3	J4	K5	L6	
		M4	N5	O6	
			P6	
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int num = -1;
	char ch = 'A';

	for(int i=1 ; i<=row ; i++){	
	
		int num1 = num+i;
			
		for(int j=1 ; j<i ; j++){
		
			printf("\t");
		}

		for(int k=1 ; k<=row*2-i*2+1 ; k++){
		
			printf("%c%d\t",ch++,num1++);
			
		}
		num++;
		printf("\n");
	}
}
