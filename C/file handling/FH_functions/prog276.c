
#include<stdio.h>
void main(){

	FILE *fp = fopen("pqr.txt","w");

	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;
	
	printf("%d\n",getw(fp));

}
