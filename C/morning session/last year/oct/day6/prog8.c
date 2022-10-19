
// palindrom numbers in given range

#include<stdio.h>

void main(){

	int start;
	printf("enter a start number\n");
	scanf("%d",&start);
	
	int end;
	printf("enter a end number\n");
	scanf("%d",&end);
	
	for(int i =start; i<=end ; i++){
	
		int num = i;
		int rev = 0;

		while(num!= 0){
		
			int rem = num%10;

			rev = rev*10+rem;

			num = num/10;
		
		}
		if(i == rev){
		
			printf("%d ",i);
		}
	}
	printf("\n");
}
