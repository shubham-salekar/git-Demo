
#include<stdio.h>

void main(){

	int num;
	printf("Enter a num\n");
	scanf("%d",&num);

	int count =0;

	while(num != 0){
	
		num = num/10;
		count++;
	}
	printf("count of digits in given no. %d\n",count);
}
