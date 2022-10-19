/*
 * wap to print niven numbers up to a given range
 * start = 10
 * end = 20    (niven is also called harshad)
 
 */

#include<stdio.h>

void main(){

	int start;
	printf("enter start\n");
	scanf("%d",&start);

	int end;
	printf("enter end\n");
	scanf("%d",&end);

	for(int i=start ; i<=end ; i++){
	
		int rem = 0;
		int sum = 0;

		int num =i;

		while(num != 0){
		
			rem = num%10;
			sum = sum+rem;
			num = num/10;
				
		}
		if(i % sum == 0){
		
			printf("%d ",i);
		}
	}



}
