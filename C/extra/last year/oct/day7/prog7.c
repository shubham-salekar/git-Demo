// check whether the given no is strong or not

#include<stdio.h>

void main(){

	int num;
	printf("enter a number\n");
	scanf("%d",&num);

	int num2 = num;

	int rem = 0;
	int sum = 0;

	while(num !=0){
	
		rem = num%10;

		int fact = 1;
		for(int i = rem ; i>=1 ; i--){
		
			fact = fact*i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum == num2){
	
		printf("%d is strong number\n",num2);
	}

}
