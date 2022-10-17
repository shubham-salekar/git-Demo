/*
factorial of even digits in given numbers
i/p = 5410221
o/p = factorial of 2 is 4;
		   2 id 4
		   0 is 1
		   4 is 24
*/

#include<stdio.h>

void main(){

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	int rem;
	while(num!=0){
	
		rem = num%10;

		if(rem%2 == 0){
			
			int fact=1;
		
			for(int i =rem ; i>=1 ; i--){
		
				fact = fact*i;
			}
			printf("Factorial of %d is %d\n",rem,fact);
		}
	
		
		num = num/10;
	}
}
