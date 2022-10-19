
// wap to print harshad number between given rang

#include<stdio.h>

void main(){

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	int sum = 0;

	int num1 = num;

	while(num !=0 ){
		
		int rem = num%10;

		sum = sum + rem;

		num = num/10;
	}
	if(num1 % sum == 0){
	
		printf("%d is harshad number\n",num1);
	}


}
