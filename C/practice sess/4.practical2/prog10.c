// take numbers from the user and print the fibonacci series up to that num :
// ip : 10
// op : 0 1 1 2 3 5 8

#include<stdio.h>
void main(){

	int num,temp;
	printf("enter a number:\n");
	scanf("%d",&num);

	int n1 = 0;
	int n2 = 1;

	for (int i = 1 ; i<num ; i++){
	
		printf("%d ",n1);	// 0 1 1 2 3 
		temp = n1;		// 0 1 1 2 
		n1 = n1+n2;		// 1 1 2 3
		n2 = temp;		// 0 1 1 2					

		if(n1 > num){
		
			break;
		}

	
	}


}
