
#include<stdio.h>

long powerDemo(int a,int n){

	if( n == 1){
	
		return a;
	}
	if(n%2 == 0)
		return powerDemo(a,n/2) * powerDemo(a,n/2);
	else
		return powerDemo(a,n/2) * powerDemo(a,n/2) * a;

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
