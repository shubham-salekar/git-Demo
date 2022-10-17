
#include<stdio.h>

void main(){
							//incomplete
	int num;
	printf("Enter a number\n");
	scanf("%d",&num);

	int rem1;
	int num2 = num;
	int count = 0;
	int rem2;


	while(num!=0){
	
		rem1 = num%10;

		
		while(num2 != 0){
		
			rem2 = num2 %10;
			
			count = 0;
			if(rem1 == rem2){
			
				count++;
			}
			num2 = num2/10;
			
		}

		printf("the frequency of %d is %d\n",rem1,count);

		num = num/10;
	}
}
