/*
 write a programm to print square of odd numbers in given range from user
Enter starting value and ending value 
10
20
121 169 225 289 361 

*/

#include<stdio.h>

void main(){

	int start,end;
	printf("Enter starting value and ending value \n");
	scanf("%d%d",&start,&end);

	for(int i=start ; i<=end ; i++){
	
		if(i%2 == 1){
		
			printf("%d ",i*i);
		}
	}
	printf("\n");
}
