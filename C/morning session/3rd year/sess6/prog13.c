/*

the numbers in range which have even factorial.

Enter starting and ending
1
5
2  3  4  5  

*/

#include<stdio.h>

void main(){

	int start,end;
	printf("Enter starting and ending\n");
	scanf("%d%d",&start,&end);

	for(int i=start ; i<=end ; i++){

		int fact = 1;

		for(int j=1 ; j<=i ; j++){
		
			fact = fact*j;
			
		}

		if(fact%2 == 0){
		
			printf("%d  ",i);
		}
	}
	printf("\n");
}
