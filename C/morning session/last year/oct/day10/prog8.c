//second minimum digit in a given number


#include<stdio.h>

void main(){

	long int num;
	printf("Enter no.\n");
	scanf("%ld",&num);

	int var1 = 1;
	int rem;
	long int num2 = num;

	int min=9;

	while(num!=0){
	
		rem = num%10;

		if(rem<min){
		
			min = rem;
		}
		num = num/10;
	}
	min = min+var1;

	long int num3 = num2;

	int rem2;

	while(num2 !=0){
	
		rem2 = num2%10;

		if(rem2 == min){
		
			printf("second minimum digit in %ld is %d ",num3,rem2);
			break;
		}
		num2 = num2/10;

	}
	num2 = num3;
	var1++;
	printf("\n");
}











