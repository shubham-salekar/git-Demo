// replace 1 by 2 


#include<stdio.h>

void main(){

	long int num1;
	printf("Enter a number\n");
	scanf("%ld",&num1);

	int rev = 0;
	int rem1;
	int rem2;

	while(num1 != 0){
	
		rem1 = num1 % 10;
		
		if(rem1 == 1){
		
			rem1 =2;
		}
		rev = rev * 10 + rem1;

		num1 = num1/10;

	}
	long int original = 0;
	while(rev != 0 ){
	
		rem2 = rev % 10;

		original = original*10+rem2;

		rev = rev/10;
	}
	printf("%ld\n",original);
}
