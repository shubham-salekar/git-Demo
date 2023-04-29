
#include<stdio.h>
#include<math.h>

void main();
double powDemo(int a,int n){

	return pow(a,n);
}
double sqrtDemo(int n){

	return sqrt(n);
}
void main(){

	double power = powDemo(2,5);
	printf("power = %f\n",power);

	double sqr = sqrtDemo(50);
	printf("sqrt = %f\n",sqr);
}
