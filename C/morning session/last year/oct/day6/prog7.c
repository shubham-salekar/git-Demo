/*
 * wap to print the reverse of  given number.
 *
 */
#include<stdio.h>

void main(){

	int num;
	printf("enter a number\n");
	scanf("%d",&num);

	while(num != 0){
	
		int rem = num%10;

		printf("%d ",rem);

		num = num/10;
	}
	printf("\n");
}
