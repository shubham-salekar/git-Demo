/*
 * wap to print the sum of digits in given number.
 *
 */
#include<stdio.h>

void main(){

	int num;
	printf("enter a number\n");
	scanf("%d",&num);

	int num2 = num;
	int sum = 0;

	while(num != 0){
	
		int rem = num%10;

		sum = sum + rem;

		num = num/10;
	}
	printf("Sum of digits in %d is %d \n",num2,sum);
}
