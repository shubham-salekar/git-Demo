
#include<stdio.h>

long powerDemo(int a,int n){

	int p = 1;
	while(n!=0){
	
		p = p * a;
		n--;
	}
	return p;
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
