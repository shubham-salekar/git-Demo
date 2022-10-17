
#include<stdio.h>

void main(){

	long int num;
	printf("Enter a number\n");
	scanf("%ld",&num);

	int rem;
	int min = 9;

	long int num2 = num;
	while(num !=0){
	
		rem = num%10;

		if(rem <= min){
		
			min = rem;
		}

		num = num/10;

	}
	printf("minimum digit in %ld is %d\n",num2,min);
}
