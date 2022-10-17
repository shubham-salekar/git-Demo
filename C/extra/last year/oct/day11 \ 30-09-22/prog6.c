// wap that print whether a number entered by user is disarium number or not.

#include<stdio.h>

void main(){

	int num;
	printf("Enter a  number\n");
	scanf("%d",&num);

	int rem;
	int num2 = num;
	int rev = 0;

	while(num!=0){
	
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;

	}
	int num3 = rev;
	int count = 0;
	int rem2;
	int sum = 0;

	while(rev!=0){
	
		count++;
		rem2 = rev%10;
		int prod = 1;
		for(int i=1 ; i<=count ; i++){
		
			prod = prod*rem2;
		}
		sum = sum+prod;

		rev = rev/10;
	}
	if(sum == num2){

		printf("%d is disarium number\n",num2);
	}else{
	
		printf("%d is not disarium number\n",num2);
	}
}
