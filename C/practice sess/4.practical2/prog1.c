WAP to Find the sum of numbers that are not divisible by 3 up to a given number
Input: 10
Output: sum of numbers not divisible by 3 is 37



#include<stdio.h>

void main(){

	int x;
	int sum = 0;

	printf("Enter a end number:\n");
	scanf("%d",&x);

	for(int i=1;i<=x;i++){
	
		if(i%3 != 0){
		
			sum = sum +i;
			
		}
	
	}
	printf("the sum of no. which are not divisible by 3 is %d\n ",sum);
	

}
