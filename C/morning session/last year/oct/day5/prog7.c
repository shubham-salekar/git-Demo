

#include<stdio.h>
void main(){

	int num;
	printf("Enter no.\n");
	scanf("%d",&num);

	int sum = 0;

	for(int i = 1 ; i<=num/2 ; i++){

		if(num%i == 0){

			sum =sum+i;
		}
	}
	if(num%sum == 0){
	
		printf("%d is perfect number\n",num);
	}else{
	
		printf("%d is not perfect num\n",num);
	}
}
