#include<stdio.h>

void main(){

	int money;
	printf("Enter how much money do you have\n");	
	scanf("%d",& money);
	 
	if (money >=500 && money<=1000){
		printf("go to anna cha dhaba\n");

	}
	if (money>=1001 && money<=2000){
		printf("go to govinda hotel\n");

	}
	if (money>=2001 && money<=5000){
		printf("go to thallaso\n");

	}
	if (money>=10000){
		printf("go to JW Marriot\n");

	}if(money<500)
		printf("tuji aai ghari ghal\n");
	
	

}
