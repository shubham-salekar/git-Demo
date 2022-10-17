/*
Program 8: Take input from the user and print the product of digits
Input = 134
Output = product of digits is 12

*/
#include<stdio.h>

void main(){

	int x;
	int rem = 0;
	int prod= 1;

	printf("Enter a num:\n");
	scanf("%d",&x);

	while(x!=0){
	
		rem = x%10;
		prod = prod*rem;
		
		x =x/10;
	}
	printf("product is:%d\n",prod);

}
