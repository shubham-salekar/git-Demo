
#include<stdio.h>

void main(){

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	int num2 = num;
	int max = 0;
	int min = 9;

	while(num != 0){
	
		int rem1 = num%10;
		if(rem1>max){
		
			max = rem1;
		}
		num = num/10;
	}
	num = num2;

	while(num != 0){
	
		int rem2 = num%10;

		if(rem2<min){
		
			min = rem2;
		}
		num = num/10;
	}
	printf("min is %d and max is %d in %d\n",min,max,num2);
}
