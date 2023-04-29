
#include<stdio.h>

long powerDemo(int a,int n){

	if(n == 0){
	
		return 1;
	}
	return a*powerDemo(a,n-1);	
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
