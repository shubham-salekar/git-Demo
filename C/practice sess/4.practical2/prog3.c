/*Program 3 :
WAP to print the divisors & count of divisors of the entered num.
Input: 15
Output: the divisors are 1 3 5 15
The count of divisors is 4
Additions of divisors 2
*/
#include<stdio.h>

void main(){
	
	int x;
	int count = 0;
	int sum = 0;

	printf("enter a num\n");
	scanf("%d",&x);
	
	printf("divisors of %d are:\n",x);
	
	for(int i = 1;i<=x ; i++){
	
		if(x%i==0){
			printf(" %d",i);
			count++;
			sum = sum + i;
		
		}
	
	}
	printf("\n");
	printf("count:%d\n",count);
	printf("sum : %d\n",sum);


}
