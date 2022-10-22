/*
 * cube of even numbers in given range from user.
Enter starting and ending value 
10
20

1000 11 1728 13 2744 15 4096 17 5832 19 8000 

*/
#include<stdio.h>

void main(){

	int start,end;
	printf("Enter starting and ending value \n");
	scanf("%d%d",&start,&end);

	for(int i=start ; i<=end ; i++){
	
		if(i%2 == 0){
		
			printf("%d ",i*i*i);
		}else{
		
			printf("%d ",i);
		}
	}
	printf("\n");
}
