
// LCM of two numbers

#include<stdio.h>

void main(){

	int var1,var2;

	int x = 1;

	printf("Enter a num1:\n");
	scanf("%d",&var1);
	
	printf("Enter a num2:\n");
	scanf("%d",&var2);

	for(int i = x ; i>=1 ; i++){
	
		if(x%var1 == 0 && x%var2 == 0){
			
			break;	
		}
		x++;
	}
	printf("%d\n",x);

}
