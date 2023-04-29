
#include<stdio.h>

long powerDemo(int a,int n){

	if( n == 1){
	
		return a;
	}
	int x = powerDemo(a,n/2);

	if(n%2 == 0)
		return x * x;
	else
		return x * x * a;

}
void main(){

	int a;
	printf("Enter number\n");
	scanf("%d",&a);

	int n;
	printf("Enter power\n");
	scanf("%d",&n);

	long ret = powerDemo(a,n);
	printf("%d to the power %d is %ld\n",a,n,ret);
}
