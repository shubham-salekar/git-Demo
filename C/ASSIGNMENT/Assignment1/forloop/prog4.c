/*
 * wap to find the sum of numbers that are divisible by 5 in the given range
 */


#include<stdio.h>

void main(){

	int x,y;
	int sum = 0;

	printf("enter start\n");
	scanf("%d",&x);

	printf("enter end\n");
	scanf("%d",&y);

	for(int i = x ; i<=y ; i++){
	
		if(i%5 == 0){
		
			sum = sum + i;
		
		}

	
	}
	printf("sum of numbers that are divisible by 5 in this range is %d\n",sum);

}
