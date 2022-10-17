/*Program 4:
Write a program to take a number as input and print whether that is a prime
number or not.
{Note: Prime number is the one which is divisible by 1 and that
number only}
Input: 41
Output: 41 is the prime number
*/

#include<stdio.h>

void main(){

	int x;
	int count = 0;

	printf("Enter a num:\n");
	scanf("%d",&x);

	for(int i = 1 ; i<=x ; i++){
		
		if(x%i==0){
		
			count++;
		}	
		
	}	
	if(count==2){
	
		printf("%d is prime no\n",x);
	}else{
	
		printf("%d is not prime no.\n",x);
	
	}
	

}
