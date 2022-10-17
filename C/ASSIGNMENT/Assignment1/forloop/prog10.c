// wap to print numbers in a given range and their multiplicative inverse
// expected op for range 1-5
// 1 = 1
// 2 = 1/2 = 0.5
// 3 = 1/3 = 0.33
// 4 = 0.25
// 5 = 0.20

#include<stdio.h>

void main(){

	float start,end;

	printf("enter start:\n");
	scanf("%f",&start);

	printf("enter end:\n");
	scanf("%f",&end);

	for (float i = start ; i<=end ; i++){
	
		printf("%d = %f\n",i, 1/i);
		
	
	}

}
