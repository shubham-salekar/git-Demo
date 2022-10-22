/*
Enter number of rows
4
100	9	64	7	
	36	5	16	
		3	4	
			1
*/
	
#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int num;
	int x = row/2;

	if(row%2 ==0){
		
		num = row*x+x;
	}else{
	
		num = row*(x+1);
	}

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("\t");
		}
		for(int k=1 ; k<=row-i+1 ; k++){
		
			if(num%2 == 0){
				printf("%d\t",num*num);
				num--;
			}else{
				printf("%d\t",num);
				num--;
			}
		}
		printf("\n");
	}
}
