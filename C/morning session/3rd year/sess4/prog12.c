/*
 
Enter num of rows 
1
5
	factorial of 1 is 1
	factorial of 2 is 2
	factorial of 3 is 6
	factorial of 4 is 24
	factorial of 5 is 120

*/
#include<stdio.h>

void main(){

	int start,end;
	printf("Enter num of rows \n");
	scanf("%d%d",&start,&end);

	for(int i=start ; i<=end ; i++){

		int fact = 1;

		for(int j=1 ; j<=i ; j++){
		
			fact = fact*j;

		}
		printf("factorial of %d is %d\n",i,fact);

	}
}
