// wap print sum of even digits in a given number 
// ip = 3412
// op = 6

#include<stdio.h>

void main(){

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	int rem ;
	int sum = 0;

	while(num !=0){
	
		rem = num%10;

		if(rem%2 == 0){
		
			sum = sum+rem;
		}
		num =num/10;
	}
	printf("sum of even digits is :%d\n",sum);
}
