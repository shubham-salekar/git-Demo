/*
	number which is divisible by 3 And 7 in given range
	Enter starting value and ending value 
	30
	80
	o/p = 63 42 


*/

#include<stdio.h>

void main(){

	int start,end;
	printf("Enter starting value and ending value \n");
	scanf("%d%d",&start,&end);

	for(int i=end ; i>=start ; i--){
	
		if(i%3 == 0 && i%7 ==0){
		
			printf("%d ",i);
		}
	}
	printf("\n");
}
