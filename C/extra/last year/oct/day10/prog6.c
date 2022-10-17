//6 . maximum digit in given number

#include<stdio.h>

void main(){

	long int num;
	printf("Enter no.\n");
	scanf("%ld",&num);

	int max = 0;
	int rem;
	long int num2 = num;

	while(num!=0){
	
		rem = num%10;
		if(rem>max){
		
			max = rem;
		}
		num = num/10;
	}
	printf("maximum digit in %ld is %d\n",num2,max);
}
