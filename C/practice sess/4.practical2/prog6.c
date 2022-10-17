/*program 6 :
Take an input number from the user and count the no of digits.
Input = 2534
Output = Number of Digits in 2534 is 4
*/
#include<stdio.h>

void main(){

	int x;
	int rem = 0;
	int count = 0;

	printf("Enter a num:");
	scanf("%d",&x);

	while(x>0){
	
		rem = x%10;
		x = x/10;
		
		count++;
		
	}

	printf("no of digits in are %d\n",count);


}
