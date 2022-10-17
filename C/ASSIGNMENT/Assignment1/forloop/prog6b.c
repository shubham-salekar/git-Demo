/* 
 * 6)
 *
 */

#include<stdio.h>

void main(){

	int num;
	int fac = 1;

	printf("enter a number:\n");
	scanf("%d",&num);

	printf("factorial of %d is \n",num);

	for(int i = 1 ; i<=num ; i++){
	
		 fac = fac * i;

	
	}
	printf("%d \n",fac);
	printf("\n");

}
