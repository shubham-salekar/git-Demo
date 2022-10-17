/*Program 7 :
Take an input number from the user and print the sum of digits.
Input = 1234
Output = sum of digits is 10
*/
#include<stdio.h>

void main(){

	int x;
	int rem = 0;
	int sum = 0;

	printf("Enter a num:");
	scanf("%d",&x);

	while(x!=0){
	
		rem = x%10;
		sum+=rem;
		x = x/10;
	}

	printf(" sum is: %d\n",sum);


}
