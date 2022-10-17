/*
0 1 2 3 
4 5 6 7 
8 9 11 22 
33 44 55 66 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int num = 0;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ;){
	
			int num1=num;
			int rem =0;
			int rev = 0;

			while(num != 0){
				
				rem = num%10;
				rev = rev*10+rem;
				num = num/10;
			}
			if(rev == num1){
				
				printf("%d ",num1);
				j++;
			}
			num = num1;
			
			num++;
		}
		printf("\n");
	}
}
