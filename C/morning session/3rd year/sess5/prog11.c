/*

addition of factoials of two numbers

Enter num1 and num2
4
5
factorials addition of 4 and 5 is 144

*/

#include<stdio.h>

void main(){

	int num1,num2;
	printf("Enter num1 and num2\n");
	scanf("%d%d",&num1,&num2);

	int fact1 = 1;

	for(int i=1 ; i<=num1 ; i++){
	
		fact1 = fact1*i;

	}
	int fact2 = 1;

	for(int i=1 ; i<=num2 ; i++){
	
		fact2 = fact2*i;
	}
	
	int fadd = fact1 +fact2;

	printf("factorials addition of %d and %d is %d\n",num1,num2,fadd);


}
