/*	
	1 2 3 4 5 
	6 7 8 9 10 
	12 18 20 21 24 
	27 30 36 40 42 
	45 48 50 54 60 
*/

#include<stdio.h>

void main(){

	int row;
	printf("enter no. of rows\n");
	scanf("%d",&row);

	int num = 1;
//	int num1 = num;

	for(int i=1 ; i<=row ;i++){
	
		for(int j = 1 ;j<=row ;){
			
			int sum = 0;
			int rem = 0;
			int num1 = num;
		
			while(num1 > 0){
		
				rem = num1%10;
				sum = sum + rem;
				num1 = num1/10;
		
			}
			if(num % sum == 0){
		
				printf("%d ",num);
				j++;
			
			}
			num++;
		}
		printf("\n");
	
	}

}
